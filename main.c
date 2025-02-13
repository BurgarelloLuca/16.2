#include <stdio.h>

int main(void) {
    FILE *myFile;
    myFile = fopen("Test.txt", "r");
    if (myFile == NULL) {
        printf("Errore durante l'apertura del file");
    }
    float velocita;
    int n;
    fscanf(myFile, "%d", &n);
    printf("ci sono %d velocita':\n",n);
    for (int i = 0; i < n; i++) {
        fscanf(myFile, "%f", &velocita);
        printf("velocita %.1f", velocita);
        if (velocita > 50) {
            printf("   limite superato\n");
        } else {
            printf("   limite non superato\n");
        }
    }


    fclose(myFile);

    return 0;
}

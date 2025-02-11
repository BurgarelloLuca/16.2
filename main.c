#include <stdio.h>

int main(void) {
    FILE *myFile;
    myFile = fopen("Test.txt", "r");
    if (myFile == NULL) {
        printf("Errore durante l'apertura del file");
    }
    float velocita;
    for (int i = 0; i < 10; i++) {
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

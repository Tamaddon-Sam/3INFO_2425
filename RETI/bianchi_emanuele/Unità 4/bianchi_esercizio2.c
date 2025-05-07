#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
    // Controllo del numero di argomenti
    if (argc != 3) {
        printf("Uso: %s <stringa binaria 1> <stringa binaria 2>\n", argv[0]);
        return 1;
    }

    char *str1 = argv[1];
    char *str2 = argv[2];

    // Controllo della lunghezza delle stringhe
    if (strlen(str1) != strlen(str2)) {
        printf("Errore: le due stringhe devono avere la stessa lunghezza.\n");
        return 1;
    }

    int hammingDistance = 0;

    // Calcolo della distanza di Hamming
    for (int i = 0; i < strlen(str1); i++) {
        if (str1[i] != str2[i]) {
            hammingDistance++;
        }
    }

    // Stampa della distanza di Hamming
    printf("La distanza di Hamming tra le due stringhe è: %d\n", hammingDistance);

    return 0;
}
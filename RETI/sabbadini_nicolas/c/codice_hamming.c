#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Funzione per calcolare la distanza di Hamming
int distanza_hamming(const char *str1, const char *str2) {
    int distanza = 0;
    for (int i = 0; str1[i] != '\0'; i++) {
        if (str1[i] != str2[i]) {
            distanza++;
        }
    }
    return distanza;
}

int main(int argc, char *argv[]) {
    if (argc != 3) {
        printf("Uso: %s <stringa_binaria1> <stringa_binaria2>\n", argv[0]);
        return 1;
    }

    const char *bin1 = argv[1];
    const char *bin2 = argv[2];

    if (strlen(bin1) != strlen(bin2)) {
        printf("Errore: le due stringhe devono avere la stessa lunghezza.\n");
        return 1;
    }

    // Verifica che siano stringhe binarie valide
    for (int i = 0; bin1[i] != '\0'; i++) {
        if ((bin1[i] != '0' && bin1[i] != '1') || (bin2[i] != '0' && bin2[i] != '1')) {
            printf("Errore: le stringhe devono contenere solo 0 e 1.\n");
            return 1;
        }
    }

    int distanza = distanza_hamming(bin1, bin2);
    printf("Distanza di Hamming: %d\n", distanza);

    return 0;
}

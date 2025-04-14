#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
    if (argc != 3) {
        printf("Uso: %s <stringa_binaria_1> <stringa_binaria_2>\n", argv[0]);
        return 1;
    }

    char *s1 = argv[1];
    char *s2 = argv[2];

    if (strlen(s1) != strlen(s2)) {
        printf("Errore: le due stringhe devono avere la stessa lunghezza.\n");
        return 1;
    }

    for (int i = 0; s1[i] != '\0'; i++) {
        if ((s1[i] != '0' && s1[i] != '1') || (s2[i] != '0' && s2[i] != '1')) {
            printf("Errore: le stringhe devono contenere solo bit (0 o 1).\n");
            return 1;
        }
    }

    int distanza = 0;
    for (int i = 0; s1[i] != '\0'; i++) {
        if (s1[i] != s2[i]) {
            distanza++;
        }
    }

    printf("Distanza di Hamming: %d\n", distanza);

    return 0;
}

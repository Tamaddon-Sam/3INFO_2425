#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
    if (argc != 3) {
        printf("Uso: %s <stringa_di_bit> <P|D>\n", argv[0]);
        return 1;
    }

    char *bitString = argv[1];
    char parita = argv[2][0];

    for (int i = 0; bitString[i] != '\0'; i++) {
        if (bitString[i] != '0' && bitString[i] != '1') {
            printf("Errore: la stringa deve contenere solo 0 e 1.\n");
            return 1;
        }
    }

    int count1 = 0;
    for (int i = 0; bitString[i] != '\0'; i++) {
        if (bitString[i] == '1') {
            count1++;
        }
    }

    int bitParita;

    if (parita == 'P') {
        bitParita = (count1 % 2 == 0) ? 0 : 1;
    } else if (parita == 'D') {
        bitParita = (count1 % 2 == 0) ? 1 : 0;
    } else {
        printf("Errore: il secondo argomento deve essere 'P' o 'D'.\n");
        return 1;
    }

    printf("Bit di parità (%c): %d\n", parita, bitParita);
    return 0;
}

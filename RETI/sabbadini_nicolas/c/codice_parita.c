#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc != 3) {
        printf("Uso: %s <stringa_di_bit> <P|D>\n", argv[0]);
        return 1;
    }

    const char *bitstring = argv[1];
    char parita = argv[2][0];

    if (parita != 'P' && parita != 'D') {
        printf("Errore: il secondo argomento deve essere 'P' per parità pari o 'D' per parità dispari.\n");
        return 1;
    }

    // Verifica che la stringa sia binaria
    for (int i = 0; bitstring[i] != '\0'; i++) {
        if (bitstring[i] != '0' && bitstring[i] != '1') {
            printf("Errore: la stringa deve contenere solo 0 e 1.\n");
            return 1;
        }
    }

    // Conta i bit a 1
    int conta_1 = 0;
    for (int i = 0; bitstring[i] != '\0'; i++) {
        if (bitstring[i] == '1') {
            conta_1++;
        }
    }

    int bit_parita;
    if (parita == 'P') {
        bit_parita = (conta_1 % 2 == 0) ? 0 : 1; // Parità pari: numero totale di 1 incluso il bit di parità deve essere pari
    } else {
        bit_parita = (conta_1 % 2 == 0) ? 1 : 0; // Parità dispari: totale deve essere dispari
    }

    printf("Bit di parità %s: %d\n", (parita == 'P') ? "pari" : "dispari", bit_parita);
    return 0;
}

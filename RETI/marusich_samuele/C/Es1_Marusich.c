#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
    if (argc != 3) {
        printf("Uso: %s <stringa_di_bit> <P|D>\n", argv[0]);
        return 1;
    }

    char *bit_string = argv[1];
    char mode = argv[2][0];

    if (mode != 'P' && mode != 'D') {
        printf("Modalità non valida. Utilizzare P o D.\n");
        return 1;
    }

    int bit_count = 0;
    int i= 0;
    for (i ; i < strlen(bit_string); i++) {
        if (bit_string[i] != '0' && bit_string[i] != '1') {
            printf("Stringa di bit non valida.\n");
            return 1;
        }
        if (bit_string[i] == '1') {
            bit_count++;
        }
    }

    int parity_bit;
    if (mode == 'P') {
        parity_bit = (bit_count % 2 == 0) ? 0 : 1;
    } else {
        parity_bit = (bit_count % 2 == 0) ? 1 : 0;
    }

    printf("Il bit di Parita' e': %d\n", parity_bit);

    return 0;
}

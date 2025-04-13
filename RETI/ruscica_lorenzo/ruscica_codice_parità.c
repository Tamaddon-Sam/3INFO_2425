#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
    if (argc != 3) {
        printf("Uso: %s <stringa_di_bit> <P|D>\n", argv[0]);
        return 1;
    }

    char *bitstring = argv[1];
    char tipo = argv[2][0];
    int count = 0;

    for (int i = 0; bitstring[i]; i++) {
        if (bitstring[i] == '1') {
            count++;
        } else if (bitstring[i] != '0') {
            printf("Errore\n");
            return 1;
        }
    }

    int parita = count % 2;
    if (tipo == 'P') {
        printf("Bit di parità pari: %d\n", parita == 0 ? 0 : 1);
    } else if (tipo == 'D') {
        printf("Bit di parità dispari: %d\n", parita == 1 ? 0 : 1);
    } else {
        printf("Errore.\n");
        return 1;
    }

    return 0;
}

#include <stdio.h>
#include <string.h>

int calcola_parita(char codice[], char tipo_parita) {
    int contatore_1 = 0;

    for (int i = 0; i < strlen(codice); i++) {
        if (codice[i] == '1') {
            contatore_1++;
        }
    }

    if (tipo_parita == 'D') {
        return (contatore_1 % 2 == 0) ? 1 : 0;
    } else {
        return (contatore_1 % 2 != 0) ? 1 : 0;
    }
}

int main(int argc, char *argv[]) {
    if (argc != 3) {
        printf("Uso corretto: %s [stringa_binaria] [P|D]\n", argv[0]);
        return 1;
    }

    char *stringa_binaria = argv[1];
    char tipo = argv[2][0];

    int bit_parita = calcola_parita(stringa_binaria, tipo);

    printf("Bit di parità: %d\n", bit_parita);
    printf("Codice completo: %s%d\n", stringa_binaria, bit_parita);

    return 0;
}

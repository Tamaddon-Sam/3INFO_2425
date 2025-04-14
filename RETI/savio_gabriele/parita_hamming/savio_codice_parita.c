/*
scrivere un programma in C che preso dalla linea di comando una stringa di bit ed un carattere (P|D) calcoli e stampi sulla consola il bit di parità pari (P) o dispari (D)
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LENGTH 100

int main(int argc, char *argv[]) {
    char *bit_string = argv[1];
    char mode = argv[2][0];

    if (mode != 'P' && mode != 'D') {
        printf("Modalita invalida\n");
        return 1;
    }

    int length = strlen(bit_string);
    if (length > MAX_LENGTH) {
        printf("La stringa è troppo lunga\n");
        return 1;
    }

    int parity = 0;
    for (int i = 0; i < length; i++) {
        if (bit_string[i] == '1') {
            parity++;
        }
    }

    int result;
    if (mode == 'P') {
        result = parity % 2 == 0 ? 0 : 1;
    } else {
        result = parity % 2 == 0 ? 1 : 0;
    }

    printf("Stringa: %s\n", bit_string);
    printf("Modalita: %c\n", mode);
    printf("BIT: %s%d\n",bit_string, result);

    return 0;
}
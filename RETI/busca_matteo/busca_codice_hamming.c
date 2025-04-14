#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

    char *str_1 = argv[1];
    char *str_2 = argv[2];
    int l1 = strlen(str_1);
    int l2 = strlen(str_2);

    if (l1 != l2) {
        printf("le stringhe sono di lunghezza diversa\n");
        return 1;
    }

    // Calcola la distanza di Hamming
    int d = 0;
    for (int i = 0; i < l1; i++) {
        if (str_1[i] != str_2[i]) {
            d++;
        }
    }

    printf("Stringa 1: %s\n", str_1);
    printf("Stringa 2: %s\n", str_2);
    printf("Distanza di Hamming: %d\n", d);

    return 0;
}
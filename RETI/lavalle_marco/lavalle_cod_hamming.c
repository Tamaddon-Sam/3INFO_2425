#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

    char *str1 = argv[1];
    char *str2 = argv[2];
    int l1 = strlen(str1);
    int l2 = strlen(str2);

    if (l1 != l2) {
        printf("the strings are of different lengths\n");
        return 1;
    }

    // Calcola la distanza di Hamming
    int d = 0;
    for (int i = 0; i < l1; i++) {
        if (str1[i] != str2[i]) {
            d++;
        }
    }

    printf("String 1: %s\n", str1);
    printf("String 2: %s\n", str2);
    printf("Hamming distance: %d\n", d);

    return 0;
}
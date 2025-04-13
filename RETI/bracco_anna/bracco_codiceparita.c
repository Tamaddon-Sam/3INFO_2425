#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
    char *str = argv[1];
    char mode = argv[2][0];

    if (mode != 'P' && mode != 'D') {
        printf("Modalità non valida! Usare 'P' o 'D'\n");
        return 1;
    }

    int c = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == '1') {
            c++;
        }
    }

    int b;
    if (mode == 'P') {
        if (c % 2 == 0) {
            b = 0;
        } else {
            b = 1;
        }
    } else { //se l'utente invece mette D per dispri
        if (c % 2 == 0) {
            b = 1; 
        } else {
            b = 0;
        }
    }

    
    printf("Stringa: %s\n", str);
    printf("Modalita': %c\n", mode);
    printf("BIT: %s%d\n",str, b);
    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
    char *str_1 = argv[1];
    char mode = argv[2][0];

    int p = 0;
    for (int i = 0; i < mode; i++) {
        if (str_1[i] == '1') {
            p++;
        }
    }

    int r;
    if (mode == 'P') {
        r = p % 2 == 0 ;
    } else {
        r = p % 2 == 0 ;
    }

    printf("Stringa: %s\n", str_1);
    printf("Modalita': %c\n", mode);
    printf("BIT: %s%d\n",str_1, r);

    return 0;
}
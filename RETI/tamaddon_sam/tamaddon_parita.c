#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main(int argc, char *argv[]) {
    char *str = argv[1];
    char c = argv[2][0];

    int parita = 0;
    for (int i = 0; i < c; i++) {
        if (str[i] == '1') {
            parita++;
        }
    }

    int risultato;
    if (mode == 'P') {
        risultato = parita % 2 == 0 ;
    } else {
        risultato = parita % 2 == 0 ;
    }

    printf("Stringa: %s\n", str);
    printf("Modalita: %c\n", c);
    printf("BIT: %s%d\n",str, risultato);

    return 0;
}

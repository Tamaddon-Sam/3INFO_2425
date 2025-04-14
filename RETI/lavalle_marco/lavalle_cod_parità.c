#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
    char *string = argv[1];
    char mode = argv[2][0];

    int p = 0;
    for (int i = 0; i < mode; i++) {
        if (string[i] == '1') {
            p++;
        }
    }

    int r;
    if (mode == 'P') {
        r = p % 2 == 0 ;
    } else {
        r = p % 2 == 0 ;
    }

    printf("string: %s\n", string);
    printf("mode': %c\n", mode);
    printf("bit: %s%d\n",string, r);

    return 0;
}
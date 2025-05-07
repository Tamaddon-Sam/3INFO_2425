#include <stdio.h>
#include <string.h>

int calcolaDistanzaHamming(char *stringa1, char *stringa2) {
    int differenze = 0;
    for (int i = 0; i < strlen(stringa1); i++) {
        if (stringa1[i] != stringa2[i]) {
            differenze++;
        }
    }
    return differenze;
}

int main(int argc, char **argv) {
    if (argc == 1) {
        printf("Pagina di aiuto\n");
        printf("Calcolatore della distanza di Hamming tra due stringhe binarie\n");
        printf("Le due stringhe devono essere passate obbligatoriamente come argomenti\n");
        return 0;
    } else if (argc != 3) {
        printf("Numero di argomenti errato\n");
        return 1;
    } else {
        char *primaStringa = argv[1];
        char *secondaStringa = argv[2];

        if (strlen(primaStringa) != strlen(secondaStringa)) {
            printf("Lunghezza delle due stringhe di bit diversa\n");
        } else {
            printf("La distanza di Hamming è %d\n", calcolaDistanzaHamming(primaStringa, secondaStringa));
        }
    }
    return 0;
}

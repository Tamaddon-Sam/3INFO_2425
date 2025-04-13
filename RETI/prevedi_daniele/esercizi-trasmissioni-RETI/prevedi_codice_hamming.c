#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
    if (argc != 3) {
        printf("Errore (argomenti insufficienti o troppi). Utilizzo corretto: %s <parola-binaria-1> <parola-binaria-2>\n", argv[0]);
        return 1;
    }

    int distanzahamming = 0;
    char tmp1[strlen(argv[1])];
    char tmp2[strlen(argv[2])];
    strcpy(tmp1, argv[1]);
    strcpy(tmp2, argv[2]);

    if (strlen(tmp1) != strlen(tmp2)) {
        printf("Errore: Le parole binarie devono avere la stessa lunghezza.\n");
        return 1;
    }

    for (int i = 0; tmp1[i] != '\0'; i++) {
        if (tmp1[i] != tmp2[i]) {
            distanzahamming++;
        }
    }

    printf("La distanza di Hamming tra le due parole binarie immesse è pari a %d\n", distanzahamming);

    return 0;
}
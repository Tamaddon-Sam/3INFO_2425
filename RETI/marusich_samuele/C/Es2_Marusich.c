#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int hamming_distance(const char *s1, const char *s2) {
    int distance = 0;
    int len = strlen(s1);
    if (len != strlen(s2)) {
        printf("Le stringhe devono avere la stessa lunghezza\n");
        exit(1);
    }
    for (int i = 0; i < len; i++) {
        if (s1[i] != s2[i]) {
            distance++;
        }
    }
    return distance;
}

int main(int argc, char *argv[]) {
    if (argc != 3) {
        printf("Uso: %s <stringa1> <stringa2>\n", argv[0]);
        exit(1);
    }
    const char *s1 = argv[1];
    const char *s2 = argv[2];
    for (int i = 0; i < strlen(s1); i++) {
        if (s1[i] != '0' && s1[i] != '1') {
            printf("Le stringhe devono essere binarie\n");
            exit(1);
        }
    }
    for (int i = 0; i < strlen(s2); i++) {
        if (s2[i] != '0' && s2[i] != '1') {
            printf("Le stringhe devono essere binarie\n");
            exit(1);
        }
    }
    int distance = hamming_distance(s1, s2);
    printf("La distanza di Hamming tra %s e %s e' %d\n", s1, s2, distance);
    return 0;
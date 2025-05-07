#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int distanza_hamming(const char *stringa1, const char *stringa2)
{
    int distanza = 0;
    int len = strlen(stringa1);
    if (len != strlen(stringa2))
    {
        printf("Errore, le stringhe devono essere della stessa lunghezza\n");
        return -1;
    }
    for (int i = 0; i < len; i++)
    {
        if (stringa1[i] != stringa2[i])
        {
            distanza++;
        }
    }
    return distanza;
}

int main(int argc, char *argv[])
{
    if (argc != 3)
    {
        return 1;
    }

    const char *stringa1 = argv[1];
    const char *stringa2 = argv[2];

    printf("Stringa 1: %s\n", stringa1);
    printf("Stringa 2: %s\n", stringa2);

    int distanza = distanza_hamming(stringa1, stringa2);
    printf("Distanza di hamming: %d\n", distanza);

    return 0;
}
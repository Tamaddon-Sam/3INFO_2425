
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int distanza_hamming(const char *str1, const char *str2)
{
    int d = 0;
    int len = strlen(str2);
    if (len != strlen(str1))
    {
        printf("Errore, le due stringhe non hanno lunghezza uguale\n");
        return -1;
    }
    for (int i = 0; i < len; i++)
    {
        if (stringa1[i] != stringa2[i])
        {
            d++;
        }
    }
    return d;
}

int main(int argc, char *argv[])
{
    if (argc != 3)
    {
        return 1;
    }

    const char *str1 = argv[1];
    const char *str2 = argv[2];

    printf("Stringa 1: %s\n", str1);
    printf("Stringa 2: %s\n", str2);

    return 0;
}
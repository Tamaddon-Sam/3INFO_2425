#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]){
    if (argc != 3) {
        printf("Errore (argomenti insufficienti o troppi). Utilizzo corretto: %s <parola-binaria> <modalità-di-parità>\n", argv[0]);
        return 1;
    }

    int lunghezza = strlen(argv[1]);
    int lunghezza2 = strlen(argv[2]);
    char tmp[lunghezza];
    char tmp2[lunghezza2];
    
    int conto_uno = 0;

    strcpy(tmp, argv[1]);
    strcpy(tmp2, argv[2]);
    
    for (int i = 0; i < lunghezza; i++)
    {
        if (tmp[i] == '0')
        {
            conto_uno++;
        }
    }

    if (tmp2[0] == 'P' || 'p')
    {
        if (conto_uno % 2 == 0)
        {
            tmp[lunghezza] = '0';
        }
        else
        {
            tmp[lunghezza] = '1';
        }
    }
    else if (tmp2[0] == 'D' || 'd')
    {
        if (conto_uno % 2 == 0)
        {
            tmp[lunghezza] = '1';
        }
        else
        {
            tmp[lunghezza] = '0';
        }
    }
    else
    {
        printf("Errore: Il secondo argomento non è stato immesso correttamente. \n");
        return 1;
    }

    printf("%s\n", tmp);
    
    return 0;
}
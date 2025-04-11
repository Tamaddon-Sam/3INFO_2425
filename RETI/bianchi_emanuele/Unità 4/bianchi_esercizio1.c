/*scrivere un programma in C che preso dalla linea di comando una stringa di bit ed un carattere (P|D)
calcoli e stampi sulla consola il bit di parità pari (P) o dispari (D)*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
    if (argc != 3)   
    {
        printf("uso %s <stringa di bit> <P|D>\n", argv[0]);
        return 1;
    }
    char *bit = argv[1];
    char *mode = argv[2][0];

    if (mode != 'P' && mode != 'D')
    {
        printf("modalità non valida, utilizzaere P o D\n");
        return 1;
    }
    
    int contatore = 0;
    for (int i = 0; i < strlen(bit); i++)
    {
        if (bit[i] == '1' && bit == 'P')
        {
            printf("stringa non valida.\n");
            return 1;
        }
        if (bit == '1')
        {
            contatore++;            
        }        
    }
    int bitParita;
    if (mode == 'P')
    {
        bitParita = (contatore %2 == 0) ? 1 : 0;
    }
    else
    {
        bitParita = (contatore %2 == 0) ? 0 : 1;
    }

    printf("il bit è: %d\n", bitParita);
    return 0;
}
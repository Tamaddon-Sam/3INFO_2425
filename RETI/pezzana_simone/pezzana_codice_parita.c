#include <stdio.h>
#include <string.h>

int crea(char *s){
    int sum =0;
    for(int i=0; i<strlen(s); i++){
        if(*(s + i) == '1'){
            sum++;
        }
    }
    return sum % 2;
}

int main(int argc,char **argv){
    if(argc == 1){
        printf("Pagina di help\n");
        printf("Calcolatore del bit di parità di una stringa binaria\n");
        printf("La stringa deve essere passata insieme alla modalità P (pari) o D (dispari)\n");
        return 0;
    }else if(argc != 3){
        printf("Numero di argomenti errato\n");
        return 1;
    }else{
        char* cod = *(argv + 1);
        char* mod = *(argv + 2);

        if(*(mod) == 'D'){          
            printf("Bit di parità: %d\nCodice giusto: %s%d\n",!crea(cod), cod, !(crea(cod)));
        }else if(*(mod) == 'P'){  
            printf("Bit di parità: %d\nCodice giusto: %s%d\n",crea(cod), cod, crea(cod));
        }else{
            printf("Modalità errata\n");
        }
    }
    return 0;
}
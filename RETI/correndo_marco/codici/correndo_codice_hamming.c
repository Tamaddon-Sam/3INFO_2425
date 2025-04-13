#include <stdio.h>
#include <string.h>

int hamming(char *s,char *p){
    int dis=0;
    for(int i=0;i < strlen(s); i++){
        if(*(s + i) != *(p + i)){
            dis++;
        }
    }
    return dis;
}

int main(int argc, char **argv){
    if(argc == 1){
        printf("Pagina di help\n");
        printf("Calcolatore della lunghezza di hamming tra due stringhe binarie\n");
        printf("Le due stringhe devono essere passate obbligatoriamente come argomenti\n");
        return 0;
    }else if(argc != 3){
        printf("Numero di argomenti errato\n");
        return 1;
    }else{
        char* primo = *(argv + 1);
        char* secondo = *(argv + 2);

        if(strlen(primo) != strlen(secondo)){
            printf("Lunghezza delle due stringhe di bit diversa\n");
        }else{
            printf("La distanza tra i due è %d\n",hamming(primo,secondo));
        }
    }
    return 0;
}
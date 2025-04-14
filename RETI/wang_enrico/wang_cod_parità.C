
#include <stdio.h>
#include <string.h>

int crea(char*s){
    int sum=0;
    for(int i=0;i<strlen(s);i++){
        if(s[i]=='1'){
            sum++;
        }
    }
    return sum%2;
}

int main(int argc, char **argv){
    if(argc != 3){
        printf("numero di argomenti errato\n");
       } else{
            if(**(argv + 2 ) == 'D'){
                printf("%s%d\n", *(argv + 1), !crea(*(argv + 1)));
            }else if(**(argv + 2)== 'P'){ 
                printf("%s%d\n", *(argv + 1), crea(*(argv + 1)));
            }
    }
}

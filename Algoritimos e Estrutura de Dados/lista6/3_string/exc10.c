#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){

    char nome[100], abreviado[100];
    gets(nome);
    int i = 0, j = 0;

    if(isupper(nome[0])){
        abreviado[j++] = nome[0];
        abreviado[j++] = '.';
    }
    while(nome[i] != '.' && nome[i] != '\0'){
        if(nome[i] == ' ' && isupper(nome[i+1])){
            abreviado[j++] = nome[i+1];
            abreviado[j++] = '.';
        }
        i++;
        
    }
    abreviado[j] = '\0';

    printf("%s", abreviado);

    return 0;
}
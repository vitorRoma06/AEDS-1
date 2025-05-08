#include <stdio.h>
#include <string.h>

int main(){

    char nome[10], nomeInvertido[10];
    scanf("%s", nome);
    int tam = strlen(nome);
    int i, j;
    for(i = tam - 1, j = 0; i >= 0 && j < tam; i--, j++){
        nomeInvertido[j] = nome[i];
    }

    nomeInvertido[j] = '\0';

    printf("%s\n", nome);
    printf("%s\n", nomeInvertido);

    if(strcmp(nome, nomeInvertido) == 0){
        printf("Eh um palindromo");
    }else{
        printf("Nao eh um palindromo");
    }

    return 0;
}
#include <stdio.h>
#include <string.h>

int main(){

    int numCaracteres = 0;
    char nome[10];
    fgets(nome, sizeof(nome), stdin);
    nome[strcspn(nome, "\n")] = '\0';

    for(int i = 0; nome[i] != '\0'; i++)
        numCaracteres++;

    printf("%d", numCaracteres);

    return 0;
}
#include <stdio.h>

int main(){

    int num, soma = 0;

    printf("Digite um numero: ");
    scanf("%d", &num);

    if(num < 0){
        printf("Erro: Numero negativo.");
        return 1;
    }

    for(int i = 0; i <= num; i++){
        if(i % 2 != 0)
            soma += i;
    }

    printf("Soma: %d", soma);

    return 0;
}
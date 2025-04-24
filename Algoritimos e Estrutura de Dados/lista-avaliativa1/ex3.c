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
        if((i % 3 == 0) ^ (i % 5 == 0))
            soma += i;
    }

    printf("Para %d a soma eh: %d", num, soma);

    return 0;
}
#include <stdio.h>

int main()
{
    int preco;
    printf("Digite o preco do produto: ");
    scanf("%d", &preco);

    if(preco > 0 && preco < 50){
        printf("Barato");
    }else if(preco >= 50 && preco < 150){
        printf("Medio");
    }else if(preco >= 150){
        printf("Caro");
    }else{
        printf("Preco invalido");
    }
}
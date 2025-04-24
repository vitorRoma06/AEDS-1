#include <stdio.h>

int main(){

    int n1, n2, n3, maior, media, soma;

    printf("Digite 3 numeros:\n");
    scanf("%d%d%d", &n1, &n2, &n3);

    if(n1 > n2 && n1 > n3){
        maior = n1;
    }else if(n2 > n1 && n2 > n3){
        maior = n2;
    }else{
        maior = n3;
    }

    soma = n1 + n2 + n3;
    media = soma/3;

    if(n1 == n2 == n){
        printf("Os numeros sao iguais.");
    }else{
        printf("Numero maior: %d\n", maior);
    }

    printf("Soma: %d\n", soma);
    printf("Media: %d\n", media);
    
}
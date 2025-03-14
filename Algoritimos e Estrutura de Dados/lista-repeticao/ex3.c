#include <stdio.h>

int main(){

    float n, media, soma = 0, count = 0;
    do{
        printf("Digite um numero: \n");
        scanf("%f", &n);
        soma += n ;
        if(n != 0){
            count++;
        }
    }
    while(n != 0);

    media = soma/count;
    printf("Media: %.1f", media);
}

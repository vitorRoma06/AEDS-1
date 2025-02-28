#include <stdio.h>

int main(){

    int num;
    printf("Informe um numero inteiro: ");
    scanf("%d", &num);
    
    if(num % 2 == 0){
        printf("%d e um numero par.\n", num);
    }
    else{
        printf("%d e um numero ímpar.\n", num);
    }
}
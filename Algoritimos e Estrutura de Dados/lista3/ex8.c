#include <stdio.h>

int main(){

    int num, u, c;
    printf("Digite um numero de 3 digitos: ");
    scanf("%d", &num);

    c = num/100;
    u = num%10;

    if(c == u){
        printf("O numero digitado eh PALINDROMO");
    }else{
        printf("O numero digitado nao eh PALINDROMO");
    }
}
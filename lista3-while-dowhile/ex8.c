#include <stdio.h>

int main(){

    int num, aux;
    long long int fatorial = 1;

    printf("Digite um numero: ");
    scanf("%d", &num);
    aux = num;

    while(aux >= 1){
        
        fatorial *= aux;
        aux--;

    }
    printf("Fatorial de %d = %I64d", num, fatorial);

    return 0;

}
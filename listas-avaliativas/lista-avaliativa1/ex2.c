#include <stdio.h>

int main(){

    int num, fatorial = 1;

    printf("Digite um numero: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Erro: Nao existe fatorial de numero negativo.\n");
        return 1;
    }
    
    if(num == 0){
        printf("Fatorial de 0: 1");
        return 0;
    }

    for(int i = 1; i <= num; i++){
        fatorial *= i;
    }

    printf("Fatorial de %d: %d", num, fatorial);
}
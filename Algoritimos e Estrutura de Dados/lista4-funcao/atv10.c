#include <stdio.h>

int somaNumerosDiv3ou5(int N);

int main(){
    int N, soma;
    scanf("%d", &N);
    soma = somaNumerosDiv3ou5(N);
    printf("Soma: %d", soma);
}

int somaNumerosDiv3ou5(int N){
    int i, soma = 0;
    for(i = 1; i<=N; i++){
        if((i % 3 == 0) != (i % 5 == 0)){
            soma += i;
        }
    }
    return soma;
}
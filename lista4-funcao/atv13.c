#include <stdio.h>

int enesimoFibonacci(int N);

int main(){
    int N, enesimoTermo;
    scanf("%d", &N);
    enesimoTermo = enesimoFibonacci(N);
    printf("%d", enesimoTermo);

}

int enesimoFibonacci(int N){
    int termoA = 0, termoS = 1, aux;
    for(int i = 1; i < N; i++){
        aux = termoS;
        termoS += termoA;
        termoA = aux;
    }
    return termoA;

}
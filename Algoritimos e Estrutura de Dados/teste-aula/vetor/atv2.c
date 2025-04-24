#include <stdio.h>

int main(){
    int vetor[10], maior;

    for(int i = 0; i < 10; i++){
        scanf("%d", &vetor[i]);
    }
    maior = vetor[0];
    for(int i = 1; i < 10; i++){
        if(vetor[i] > maior)
            maior = vetor[i];
    }
    printf("%d", maior);
}
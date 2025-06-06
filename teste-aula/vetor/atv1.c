#include <stdio.h>

int main(){
    int vetor[10];
    for(int i = 0; i < 10; i++){
        scanf("%d", &vetor[i]);
    }

    printf("Numeros positivos:\n");
    
    for(int i = 0; i < 10; i++){
        if(vetor[i] > 0)
            printf("%d\n", vetor[i]);
    }

}
#include <stdio.h>
#include <stdlib.h>

int main(){

    int n;
    printf("Digite o numero de elemntos:");
    scanf("%d", &n);

    int *vetorX = (int*) malloc(n * sizeof(int));
    if(vetorX == NULL){
        printf("Erro ao alocar memoria");
        return 1;
    }
    for(int i = 0; i < n; i++)
        scanf("%d", &vetorX[i]);

    int *vetorY = (int*) malloc(n * sizeof(int));
    if(vetorY == NULL){
        printf("Erro ao alocar memoria");
        return 1;
    }
    for(int i = n-1, j = 0; i>=0 && j < n; i--, j++){
        vetorY[j] = vetorX[i];
    }
    printf("Vetor X:");
    for(int i = 0; i < n; i++){
       printf("%d ", vetorX[i]);
    }
    printf("\n");
    printf("Vetor Y:");
    for(int i = 0; i < n; i++){
       printf("%d ", vetorY[i]);
    }
    free(vetorX);
    free(vetorY);

    return 0;
}
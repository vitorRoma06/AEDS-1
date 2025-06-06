#include <stdio.h>

int main(){

    int vetorX[10], vetorY[10], vetorZ[20];

    for(int i = 0; i < 10; i++){
        printf("Vetor X, Indice %d:", i);
        scanf("%d", &vetorX[i]);     
    }

    for(int i = 0; i < 10; i++){
        printf("Vetor Y, Indice %d:", i);
        scanf("%d", &vetorY[i]);
    }

    for(int i = 0, j = 0; i < 10; i++, j+= 2){
        vetorZ[j] = vetorX[i];
        vetorZ[j+1] = vetorY[i];
    }
    
    for(int i = 0; i < 20; i++){
        printf("| %d |", vetorZ[i]);
    }

}
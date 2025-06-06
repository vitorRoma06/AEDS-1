#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void preencheValores(int x[], int y[], int legth){
    for(int i = 0; i < legth; i++){
        x[i] = rand() % 11 + 10;
        y[i] = rand() % 11 + 10;
    }
}

void intercala(int x[], int y[], int length, int z[]){
    for(int i = 0, j = 0; i < length; i++, j+=2){
        z[j] = x[i];
        z[j+1] = y[i]; 
    }
}

void imprimeVetor(int v[], int tam){
    for(int i = 0; i< tam; i++){
        printf("%d ", v[i]);
    }
    printf("\n");
}

int main(){
    srand(time(NULL));

    int tam = 10, tamz = 20;
    int x[tam], y[tam], z[tamz];
    preencheValores(x, y, tam);
    intercala(x, y, tam, z);
    imprimeVetor(x, tam);
    imprimeVetor(y, tam);
    imprimeVetor(z, tamz);
}
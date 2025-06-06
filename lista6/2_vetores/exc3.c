#include <stdio.h>
#include <stdlib.h>
#include <time.h>

float calcularMedia(float *v, int n);

int main(){
    srand(time(NULL));
    int n;
    printf("Digite o numero de elementos:");
    scanf("%d", &n);
    float *v = (float *) malloc(n * sizeof(float));

    if(v == NULL){
        printf("Erro ao alocar a memoria.\n");
        return 1;
    }

    for(int i = 0; i < n; i++){
        v[i] = (float)(rand() % 100);
    }
    float media = calcularMedia(v, n);
    printf("Media dos valores: %.2f", media);
    
    free(v);
}

float calcularMedia(float *v, int n){
    float media = 0.0;
    for(int i = 0; i < n; i++)
        media+=v[i];
    media /= n;
    return media;
}

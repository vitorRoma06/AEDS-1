#include <stdio.h>

void preencheNotas(int tam, int vetor[]){
    for(int i = 0; i < tam; i++){
        scanf("%d", &vetor[i]);
    }
}

void calculaMedia(int tam, int vetor[]){
    float media = 0.0;
    int count = 0;
    for(int i = 0; i< tam; i++){
        media += vetor[i];
    }
    media /= tam;
    for(int i = 0; i < tam; i++){
        if(vetor[i] > media)
            count++;
    }
    printf("Media: %.2f\n", media);
    printf("Alunos acima da media: %d\n", count);
}

int main(){

    int tam = 10;
    int vetor[tam];
    preencheNotas(tam, vetor);
    calculaMedia(tam, vetor);
}
#include <stdio.h>

float mediaFamilia(float salarioF, int qtdPessoas){
    return salarioF/qtdPessoas;
}
float mediaPopulcao(float mediaP, int qtdFamilia){
    return mediaP/qtdFamilia;
}

int main(){

    float salario, mediaPopulacao = 0;
    int pessoas, count = 0;

    do{
        scanf("%f", &salario);
        if(salario != 0){
            scanf("%d", &pessoas);
            mediaPopulacao += mediaFamilia(salario, pessoas);
            count++;
        }
    }while(salario != 0);

    printf("Media Populacao: %.2f", mediaPopulcao(mediaPopulacao, count));


}

#include <stdio.h>

int main(){

    int horasInicio, horasFim, duracao;

    printf("Digite a hora de inicio do jogo: ");
    scanf("%d", &horasInicio);
    printf("Digite a hora de fim do jogo: ");
    scanf("%d", &horasFim);


    if(horasInicio < 0 || horasInicio > 23 || horasFim < 0 || horasFim > 23){
        printf("Insira valores validos!");
        return 1;
    }

    if(horasFim > horasInicio){
        duracao = horasFim - horasInicio;
    }else{
        duracao = (24 - horasInicio) + horasFim;
    }

    printf("%d hora(s) de jogo", duracao);

    return 0;
}
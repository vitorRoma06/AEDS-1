#include <stdio.h>

float pesoIdeal(float h, char sexo){
    if(sexo == 'F' || sexo == 'f')
        return (62.1 * h) - 44.7;
    else
        return (72.7 * h) - 58;
}
int main(){

    float h, pesoAtual, pesOIdeal;
    char sexo;
    scanf("%c %f %f", &sexo, &h, &pesoAtual);

    pesOIdeal = pesoIdeal(h, sexo);

    if(pesoAtual > pesOIdeal)
        printf("PESO IDEAL: %.2f. Voce precisa perder %.2f: ",pesOIdeal, pesoAtual - pesOIdeal);
    if(pesoAtual < pesOIdeal)
        printf("PESO IDEAL: %.2f. Voce precisa ganhar %.2f: ",pesOIdeal, pesOIdeal - pesoAtual);

}

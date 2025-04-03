#include <stdio.h>

float pesoIdeal(float h, char sexo){
    if(sexo == 'F' || sexo == 'f')
        return (62.1 * h) - 44.7;
    else
        return (72.7 * h) - 58;
}
int main(){

    float h;
    char sexo;
    scanf("%c %f", &sexo, &h);
    printf("%.2f", pesoIdeal(h, sexo));
}

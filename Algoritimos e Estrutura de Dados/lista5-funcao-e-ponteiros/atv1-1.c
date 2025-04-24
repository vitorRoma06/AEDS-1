/*funcao com objetivo de calcular a media aritimetica ou ponderada de 3 notas
Entrada: 3 notas(float) 1 letra(char)
Saida: media aritmetica ou ponderada
*/
#include <stdio.h>

float calcularMedia(float n1, float n2, float n3, char tipoMedia){

    if(tipoMedia == 'A')
        return (n1+n2+n3)/3.0;
    if(tipoMedia == 'P')
        return (n1*5 + n2*3 + n3*2)/10;
}

int main(){

    float nt1, nt2, nt3, media;
    char tipoDMedia;

    scanf("%f%f%f", &nt1, &nt2, &nt3);
    fflush(stdin);
    scanf("%c", &tipoDMedia);
    if(tipoDMedia != 'A' || tipoDMedia != 'P')
        printf("Operacao Errada");
    else
        media = calcularMedia(nt1, nt2, nt3, tipoDMedia);
    if(tipoDMedia == 'A')
        printf("Media Aritimetica: %.2f", media);
    if(tipoDMedia == 'P')
        printf("Media Ponderada: %.2f", media);
}

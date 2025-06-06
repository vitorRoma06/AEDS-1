#include <stdio.h>

int main() {

    int qtsDias, ano, semana, dia;

    printf("Informe a quantidade de dias: ");
    scanf("%d", &qtsDias);

    ano = qtsDias / 365;
    semana = (qtsDias % 365) / 7;
    dia = (qtsDias % 365) % 7;
    
    printf("%d anos, %d semanas, %d dias\n", ano, semana, dia);
}
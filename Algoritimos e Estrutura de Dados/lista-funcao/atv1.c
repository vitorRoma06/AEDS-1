#include <stdio.h>

float paraMetrosPorSegundo(float v){
    return v/3.6;
}

int main(){

    float kmPorHora;
    scanf("%f", &kmPorHora);

    printf("%.2f", paraMetrosPorSegundo(kmPorHora));
}


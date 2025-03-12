#include <stdio.h>

int main(){

    int n1, n2, n3, p1, p2, p3;
    printf("Digite a nota 1 e o peso:\n");
    scanf("%d%d",&n1, &p1);
    printf("Digite a nota 2 e o peso:\n");
    scanf("%d%d",&n2, &p2);
    printf("Digite a nota 3 e o peso:\n");
    scanf("%d%d",&n3, &p3);
    
    float media = ((n1*p1)+(n2*p2)+(n3*p3)) / (p1+p2+p3);
    if(media >= 7){
        printf("Aprovado");
    }else if(media >= 5 && media <= 6.9){
        printf("Recuperacao");
    }else if(media >= 0 && media < 5){
        printf("Reprovado");
    }else{
        printf("Nota invalida");
    }
    printf("\nSua media foi %.1f", media);
}
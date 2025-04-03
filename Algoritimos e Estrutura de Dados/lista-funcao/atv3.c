#include <stdio.h>

int maior3(int n1, int n2, int n3){
    int aux;
    if(n1 > n2){ aux = n1; n1 = n2; n2 = aux;}
    if(n1 > n3){ aux = n1; n1 = n3; n3 = aux;}
    if(n2 > n3){ aux = n2; n2 = n3; n3 = aux;}

    return n3;
}

int main(){

    int n1, n2, n3;
    printf("Digite 3 numeros: ");
    scanf("%d%d%d", &n1, &n2, &n3);
    printf("Maior numero: %d", maior3(n1, n2, n3));
}

#include <stdio.h>

int main(){

    int a, b, c, aux;

    printf("Digite tres numeros:\n");
    scanf("%d %d %d", &a, &b, &c);

    if(a > b){
        aux = a;
        a = b;
        b = aux;
    }
    if(a > c){
        aux = a;
        a = c;
        c = aux;
    }
    if(b > c){
        aux = b;
        b = c;
        c = aux;
    }

    printf("Numeros em ordem crescente: %d %d %d", a, b, c);
}
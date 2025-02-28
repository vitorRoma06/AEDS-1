#include <stdio.h>

int main() {
    int valor, nota100, nota50, nota20, nota10, nota5, nota2, nota1;
    
    printf("Digite o valor a ser sacado: ");
    scanf("%d", &valor);
    
    if (valor >= 100) {
        nota100 = valor / 100;
        valor %= 100;
    } else {
        nota100 = 0;
    }
    
    if (valor >= 50) {
        nota50 = valor / 50;
        valor %= 50;
    } else {
        nota50 = 0;
    }
    
    if (valor >= 20) {
        nota20 = valor / 20;
        valor %= 20;
    } else {
        nota20 = 0;
    }
    
    if (valor >= 10) {
        nota10 = valor / 10;
        valor %= 10;
    } else {
        nota10 = 0;
    }
    
    if (valor >= 5) {
        nota5 = valor / 5;
        valor %= 5;
    } else {
        nota5 = 0;
    }
    
    if (valor >= 2) {
        nota2 = valor / 2;
        valor %= 2;
    } else {
        nota2 = 0;
    }
    
    nota1 = valor;
    
    printf("Notas fornecidas:\n");
    if (nota100 > 0) printf("%d nota(s) de R$ 100\n", nota100);
    if (nota50 > 0) printf("%d nota(s) de R$ 50\n", nota50);
    if (nota20 > 0) printf("%d nota(s) de R$ 20\n", nota20);
    if (nota10 > 0) printf("%d nota(s) de R$ 10\n", nota10);
    if (nota5 > 0) printf("%d nota(s) de R$ 5\n", nota5);
    if (nota2 > 0) printf("%d nota(s) de R$ 2\n", nota2);
    if (nota1 > 0) printf("%d nota(s) de R$ 1\n", nota1);
    
    return 0;
}
#include <stdio.h>

#define MAX 1001  

void preencherFibonacci(unsigned long long *fib) {
    fib[0] = 1;
    fib[1] = 1;
    for (int i = 2; i < MAX; i++) {
        fib[i] = fib[i - 1] + fib[i - 2];
    }
}

int main() {
    int n;
    unsigned long long fib[MAX]; 
    preencherFibonacci(fib); 

    while (1) {
        printf("Digite um número para o Fibonacci (0 a 1000): ");
        scanf("%d", &n);

        if (n < 0 || n > 1000) {
            printf("Encerrando o programa. Número fora do intervalo permitido.\n");
            break;
        }

        printf("Termo %d: %llu\n", n, fib[n]);
    }

    return 0;
}
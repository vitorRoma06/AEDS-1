#include <stdio.h>
#include <stdlib.h>

int main(){
    int n, sucessorN;
    printf("Digite um numero:");
    scanf("%d", &n);
    sucessorN = n + 1;
    printf("O sucessor de %d eh %d", n, sucessorN);

    getch();
}

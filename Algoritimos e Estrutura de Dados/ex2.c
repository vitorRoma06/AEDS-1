#include <stdio.h>

int main(){
    float not1, not2, not3, somaN, mediaN, produtoN;
    printf("Digite 3 notas:\n");
    scanf("%f%f%f", &not1, &not2, &not3);
    somaN = not1 + not2 + not3;
    mediaN = somaN/3;
    produtoN = not1 * not2 * not3;
    printf("Soma das notas: %.1f\n", somaN);
    printf("Media das notas: %.1f\n", mediaN);
    printf("Produto das notas: %.1f\n", produtoN);

    return 0;
}

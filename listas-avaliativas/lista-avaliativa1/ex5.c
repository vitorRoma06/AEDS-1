#include <stdio.h>

int main(){

    int num, fiboAnt = 0, fiboSuc = 1, aux;

    printf("Digite um numero: ");
    scanf("%d", &num);

    if(num <= 0){
        printf("Erro: Numero menor ou igual a zero");
        return 1;
    }

    for(int i = 1; i <= num; i++){
        printf("%d ", fiboAnt);
        aux = fiboSuc;
        fiboSuc += fiboAnt;
        fiboAnt = aux;
    }

}
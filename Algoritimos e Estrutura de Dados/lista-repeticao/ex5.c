#include <stdio.h>


int main(){

    int n, count = 1;
    printf("Digite um numero: ");
    scanf("%d", &n);
    while(count <= 10){

        printf("%d x %d = %d\n", n, count, n*count);
        count++;
    }
}

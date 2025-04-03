#include <stdio.h>

int ehPar(int n){
    return (n % 2 == 0 ? 1 : 0);
}

int main(){

    int num;
    scanf("%d", &num);
    printf("%d", ehPar(num));
}

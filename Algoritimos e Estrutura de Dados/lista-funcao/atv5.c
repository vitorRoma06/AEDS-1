#include <stdio.h>

int ehDivisivelPor3ou5(int n){
    return (n % 5 == 0 ^ n % 3 == 0) ? 1 : 0;
}

int main(){

    int num;
    scanf("%d", &num);
    printf("%d", ehDivisivelPor3ou5(num));
}

#include <stdio.h>

int main(){

    int n;
    printf("Numero para o comeco da contagem: ");
    scanf("%d", &n);
    while(n >= 0){
        printf("%d\n", n);
        n--;
    }
}

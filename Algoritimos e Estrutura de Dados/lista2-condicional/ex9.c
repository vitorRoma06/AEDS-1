#include <stdio.h>

int main()
{

    int num;
    printf("Digite um numero: ");
    scanf("%d", &num);

    if (num <= 1)
    {
        printf("Nao eh primo");
    }
    else if (num == 2)
    {
        printf("Eh primo");
    }
    else if (num % 2 == 0)
    {
        printf("Nao eh primo");
    }else if(num % 2 == 0 || num % 3 == 0 || num % 5 == 0 || num % 7 == 0 || num % 11 == 0){
        printf("Nao eh primo");
    }else{
        printf("Eh primo");
    }
}
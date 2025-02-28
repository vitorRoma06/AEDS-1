#include <stdio.h>

int main()
{
    int nota;

    printf("Digite uma nota: ");
    scanf("%d", &nota);

    if(nota < 0 || nota > 10){
        printf("Nota invalida.\n");
    }else{
        printf("Nota %d.\n", nota);
    }

}
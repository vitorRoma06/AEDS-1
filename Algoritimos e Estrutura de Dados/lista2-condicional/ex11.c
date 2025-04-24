#include <stdio.h>

int main()
{

    int num = 42, palpite;

    printf("Adivinhe o numero: ");
    scanf("%d", &palpite);

    // if (palpite == num)
    // {
    //     printf("Voce acertou o numero");
    // }
    // else if (palpite > num)
    // {
    //     printf("Numero inserido e maior que o numero secreto");
    // }
    // else
    // {
    //     printf("Numero inserido e menor que o numero secreto");
    // }
    while (palpite != num)
    {
        if (palpite > num)
        {
            printf("Numero inserido e maior que o numero secreto\n");
        }
        else
        {
            printf("Numero inserido e menor que o numero secreto\n");
        }
        printf("Adivinhe o numero: ");
        scanf("%d", &palpite);
    }

    printf("Voce acertou o numero");
}
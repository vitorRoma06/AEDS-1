#include <stdio.h>
#include <math.h>

float calculaMedia(int x, int y, int z, int operacao);

int main()
{

    int operacao;
    do
    {
        printf("(1) Media Geometrica:\n");
        printf("(2) Media Ponderada:\n");
        printf("(3) Media Harmonica:\n");
        printf("(4) Media Aritmetica:\n");
        printf("Escolha a operacao:\n");
        scanf("%d", &operacao);
        if (operacao >= 1 && operacao <= 4)
        {
            int x, y, z;
            printf("Digite tres numeros inteiros: ");
            scanf("%d%d%d", &x, &y, &z);
            printf("%f", calculaMedia(x, y, z, operacao));

        }else{
            printf("Operacao Invalida.\n");
        }
    

    } while (operacao < 1 || operacao > 4);
}

float calculaMedia(int x, int y, int z, int operacao)
{
    switch (operacao)
    {
    case 1:
        return cbrt(x * y * z);
    case 2:
        return ((x + 2) * (x + 3) * z)/6.0;
    case 3:
        return 3.0 / (1.0 / x + 1.0 / y + 1.0 / z);
    case 4:
        return (x + y + z) / 3.0;
    default:
        return 0.0;
    }
}
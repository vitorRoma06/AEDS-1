#include <stdio.h>

int soma(int a, int b)
{
    return a + b;
}

int multiplicacao(int a, int b)
{
    return a * b;
}
int main()
{

    int escolha, num1, num2, somaOp, multiplicacaoOp;
    
    do
    {
        printf("Digite sua operacao: \n");
        printf("1 - Soma\n");
        printf("2 - Multiplicao\n");
        scanf("%d", &escolha);
        printf("Digite os 2 numeros: ");
        scanf("%d%d", &num1, &num2);

        somaOp = soma(num1, num2);
    multiplicacaoOp = multiplicacao(num1, num2);
    
        switch (escolha)
        {

        case 1:
            printf("%d", somaOp);
        case 2:
            printf("%d", multiplicacaoOp);
        }
    } while (escolha < 1 || escolha > 3);
}

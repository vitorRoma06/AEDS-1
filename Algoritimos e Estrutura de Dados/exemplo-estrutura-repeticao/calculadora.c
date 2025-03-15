#include <stdio.h>

int main(){

    int operacao, continuar;
    float n1, n2, result;

    do{
        printf("-----------------\n");
        printf("(1) - Soma\n");
        printf("(2) - Subtracao\n"); 
        printf("(3) - Multiplicacao\n");
        printf("(4) - Divisao\n");
        printf("(0) - Sair\n");
        printf("-----------------\n\n");

        printf("Digite sua opcao: ");
        scanf("%d", &operacao);

        if(operacao == 0){
            printf("Programa Finalizado\n");
            return 0;
        }else if(operacao < 0 || operacao > 4){
            printf("Operacao Invalida\n");
        }else{  
            printf("Digite os dois numeros para a operacao: \n");
            scanf("%f %f", &n1, &n2);
            switch(operacao){
                case 1:
                    result = n1 + n2;
                    printf("Resultado da soma: %.1f\n", result);
                    break;
                case 2: 
                    result = n1 - n2;
                    printf("Resultado da subtracao: %.1f\n", result);
                    break;
                case 3:
                    result = n1 * n2;
                    printf("Resultado da subtracao: %.1f\n", result);
                    break;
                case 4: 
                    result = n1 / n2;
                    printf("Resultado da divisao: %.1f\n", result);
                    break;
                default:
                    printf("Operacao Invalida\n");
                    break;
            }

            printf("\nDeseja fazer mais uma operacao? (0) - Sim / (Qualquer numero) - Nao: \n");
            scanf("%d", &continuar);
        
        }
    }while(operacao < 0 || operacao > 4 || continuar == 0);

    
}
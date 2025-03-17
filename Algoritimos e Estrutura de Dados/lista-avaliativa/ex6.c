#include <stdio.h>


int main(){

    int opcao, meses;
    float salario, novo_salario, ferias, decimo_terceiro;

    do{
        printf("----------------\n");
        printf("(1) - Novo salario\n");
        printf("(2) - Ferias\n");
        printf("(3) - Decimo Terceiro\n");
        printf("(4) - Sair\n");
        printf("----------------\n");
        printf("Digite sua opcao: ");
        scanf("%d", &opcao);

        if(opcao >= 1 && opcao <= 3){
            printf("Digite seu salario: ");
            scanf("%f", &salario);
            while(salario < 0){
                printf("Salario invalido. Tente novamente: ");
                scanf("%f", &salario);
            }
        }

        switch(opcao){
            case 1:
                if(salario > 0 && salario <= 999.99){
                    novo_salario = salario + (salario * 0.15);
                }else if(salario >= 1000 && salario <= 2000){
                    novo_salario = salario +  (salario * 0.10);
                }else{
                    novo_salario = salario +  (salario * 0.05);
                }
                printf("Novo salario: %.2f\n", novo_salario);
                break;
            case 2:
                ferias = salario + salario/3;
                printf("Valor das ferias: %.2f\n", ferias);
                break;
            case 3: 
                printf("Digite o numero de meses na empresa(no maximo doze):");
                scanf("%d", &meses);

                while(meses < 1 || meses > 12){
                    printf("Mes invalido. Por favor, digite um valor entre 1 e 12: ");
                    scanf("%d", &meses);
                }

                decimo_terceiro = (salario*meses) / 12;
                printf("Valor do decimo terceiro: %.2f\n", decimo_terceiro);
                break;
            case 4:
                printf("Programa Finalizado.\n");
                break;
            default:
                printf("Opcao Invalida\n");
                break;
        }
    }while(opcao != 4);


}
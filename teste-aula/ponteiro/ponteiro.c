#include <stdio.h>

void trocar(int *num1, int *num2){
    int temp;
    temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}
//para trocar valores de duas variaveis sem precisar retornar nada na funcao
//sera preciso usar ponteiro porque
//AS FUNCOES FAZEM A COPIA DOS VALORES QUE SAO DADAS A ELA E APOS ISSO JOGA FORA
//entao ao receber o endereco, a funcao iguala o falor *num1 = &a isso significa que agora
//o num1 tivesse o endereco e valor da variavel a, entao eh possivel pegar o valor de num1 usando *num1
//com isso sera possivel trocar os valores de num1 e dois na memoria o que apos isso nao vai ser jogado
//fora mesmo a funcao nao retornando nada

int main(){
    int a = 5, b = 10;

    trocar(&a, &b);
    printf("%d %d", a, b);
}
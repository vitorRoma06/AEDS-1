#include <stdio.h>

void exibirInfo(){
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    printf("NOME | ENDERECO | VALOR\n");
    printf("  a  |    %p    | %d\n", &a, a);
    printf("  b  |    %p    | %d\n", &b, b);
    printf("  c  |    %p    | %d\n", &c, c);
}

int main(){   
    exibirInfo();
    return 0;
}
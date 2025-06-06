#include <stdio.h>

void ordernarCrescente(int n1, int n2, int n3){
    int aux;
    if(n1 > n2) { aux = n1; n1 = n2; n2 = aux;}
    if(n1 > n3) { aux = n1; n1 = n3; n3 = aux;}
    if(n2 > n3) { aux = n2; n2 = n3; n3 = aux;}

    printf("%d %d %d\n", n1, n2, n3);
}

int main(){

    int nm1, nm2, nm3, n;
    printf("Quantos conjuntos: ");
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%d %d %d", &nm1, &nm2, &nm3);
        ordernarCrescente(nm1, nm2, nm3);
    }
}

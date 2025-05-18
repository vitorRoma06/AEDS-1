#include <stdio.h>

void incremento_vetor(int n, int *v){

    int i;
    for(i = 0; i < n; i++)
        v[i]++;
}

int main(){

    int n;
    scanf("%d", &n);
    int v[n];
    for(int i=0;i<n;i++)
        scanf("%d", &v[i]);

    incremento_vetor(n, v);
    
    for(int i=0;i<n;i++)
        printf("%d ", v[i]);
}
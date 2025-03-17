#include <stdio.h>

int main(){

    int count = 0, n=15;
    int i;
    for(i = 0; i < n; i++){
        if(i%2 == 1)
            count++;
    }
    printf("%d", count);

    for(i = 1; i <=n; i *= 2){
        if(i%2 == 0)
            printf("Ola");
    }
}
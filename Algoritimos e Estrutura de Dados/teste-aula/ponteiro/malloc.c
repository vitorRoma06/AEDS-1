#include <stdio.h>
#include <stdlib.h>

int main(){
    int *p1, *p2, n =5;
    p1 = (int*) malloc(n * sizeof(int));

    for(int i = 0; i < n; i++){
        p1[i] = i + 1;
    }

    p2 = *p1;

    p2 = (int*) realloc(p2, 10 * sizeof(int));

    for (int i = 5; i < 10; i++){
        p2[i] = i+1;
    }
}
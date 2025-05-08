#include <stdio.h>
#include <stdlib.h>



int main(){

    int n;
    scanf("%d", &n);

    float **v1 = (float**) calloc(n, sizeof(float*));

    for(int i = 0; i < n; i++){
        v1[i] = (float*) calloc(n, sizeof(float));
    }

    for(int i = 0 ; i<n; i++){
        for(int j = 0; j<n; j++){
            printf("%.1f ", v1[i][j]);
        }
        printf("\n");
    }


    for(int i = 0; i<n; i++){
        free(v1[i]);
    }
    free(v1);

    return 0;
}
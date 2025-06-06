#include <stdio.h>
#include <math.h>
int main(){

    int x1, x2, y1, y2;
    float distacia;

    printf("Digite o valor de x1 e y1:\n");
    scanf("%d%d", &x1, &y1 );

    printf("Digite o valor de x2 e y2\n");
    scanf("%d%d", &x2, &y2);

    distacia = sqrt(pow((x2-x1), 2) + pow((y2-y1), 2));

    printf("%f.2", distacia);

}

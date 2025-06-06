#include <stdio.h>

int main()
{

    // Declarando variaveis, atribuindo valor de d como 1
    int a, b, c, d = 1;

    a = -2; //a = -2
    b = a * a; //b = 4
    c = d++; //c = 1 / d = 2
    d = c++ + 5;//d = 2 + 5 = 7 / c = 2
    d = ++c + 5;//d = 3 + 5 / c = 3
    printf("%d %d %d %d", a, b, c, d);
}
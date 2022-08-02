#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a, b;
    printf("\nInsira seu primeiro número real: ");
    scanf("%f", &a);
    printf("\nInsira seu segundo número real: ");
    scanf("%f", &b);
    if(a==b)
        printf("Os dois numeros são iguais.");
    else
        (a>b)? printf("%.2f é maior que %.2f", a, b):printf("%.2f é maior do que %.2f.", b, a);

}
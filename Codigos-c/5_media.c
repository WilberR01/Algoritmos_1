#include <stdio.h>

int main()
{
    float num1, num2, num3;
    printf("Digite seu primeiro valor: ");
    scanf("%f", &num1);
    printf("Digite seu segundo valor: ");
    scanf("%f", &num2);    
    printf("Digite seu terceiro valor: ");
    scanf("%f", &num3);

    float media = (num1 + num2 + num3)/3;
    printf("A média aritmética destes valores é: %.2f\nValor com apenas 2 casas após a vírgula.\n", media);
}
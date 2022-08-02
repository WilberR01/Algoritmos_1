#include <stdio.h>

int main(void)
{
    int qtd_copias;
    float valor_copias;

    printf("Informe a quantidade de cópias:");
    scanf("%d", &qtd_copias);

    if(qtd_copias <= 100)
    {
        valor_copias = 0.25*qtd_copias;
    }
    else
    {
        valor_copias = 0.20*qtd_copias; 
    }

    printf("O valor total a ser pago pelas cópias é: %.2f\n", valor_copias);
}
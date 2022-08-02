#include <stdio.h>

int main(void)
{
    float valor_em_real, valor_em_dolar, conversao;
    
    printf("Insira o valor em reais a ser convertido: ");
    scanf("\n%f", &valor_em_real);
    printf("Insira o valor da cotação do dólar: ");
    scanf("\n%f", &valor_em_dolar);
    
    conversao = valor_em_real/valor_em_dolar;

    printf("\n\t%.2f reais equivalem a %.2f dólares\n\n", valor_em_real, conversao);
}
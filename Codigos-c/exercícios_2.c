#include <stdio.h>
#include <stdlib.h>

//Calculo do imposto baseado na tabela de alíquotas de 2022.

float c_irpf(float s);
float c_inss(float s);

int main()
{
    printf("\n\t Calculadora De Desconto IRPF e INSS");
    float salario, salario_inss, s_liquido, inss, irpf;
    int cont = 1;
    while(cont < 2)
    {
    printf("\nInsira seu salário bruto:");
    scanf("%f", &salario);
    if (salario > 0)
    {
        if(c_irpf(salario) == 0)
            printf("Isento de Imposto de Renda");
        else {
            salario_inss = salario - c_inss(salario);
            printf("\nO desconto de IRPF é: %.2f", (c_irpf(salario_inss)));
        }
    printf("\nO desconto de INSS é: %.2f", (c_inss(salario)));
    printf("\nSeu salario líquido é igual a: R$%.2f", s_liquido = (salario - c_irpf(salario_inss) - c_inss(salario)));
    }
    else
        printf("Este salário é inválido.\n");
        printf("\n\nRepetir? \tSim (1) -- Não (2)\n");
        scanf("%d", &cont);
    }
}
float c_irpf(float s)
{
    float desconto = 0;
    if(s<=2500)
        return desconto;
    else if(s>2500 && s<=3200)
        return desconto = (s * 0.075)-142.80;
    else if(s>3200 && s<=4250)
        return desconto = (s * 0.15) - 354.8;
    else if(s > 4250 && s <=5300)
        return desconto = (s * 0.225) - 636.13;
    else 
        return desconto = (s * 0.275) - 869.36;
}
float c_inss(float s)
{
    float desconto = 0;
    if(s<=1212)
        return desconto = s * 0.075;
    else if(s>1.212 && s<=2427.35)
        return desconto = (s * 0.09) - 18.18;
    else if(s>2427.35 && s<=3641.03)
        return desconto = (s * 0.12) - 91;
    else
        return desconto = (s * 0.14) - 163.82;
}
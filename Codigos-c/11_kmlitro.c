#include <stdio.h>

int main()
{
    float km, litros;
    printf("Insira os quilometros percorridos: ");
    scanf("%f", &km);
    printf("Insira o combustível gasto: ");
    scanf("%f", &litros);

    float media = (km/litros);
    printf("A média de Km/L é: %.2f\n", media);
}
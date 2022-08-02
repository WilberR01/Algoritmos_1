#include <stdlib.h>
#include <stdio.h>


int main()
{
    float seq[5];
    float AT;
    printf("\tCalculadora de amplitude total.");
    printf("\nInsira os 5 números da sua sequência neste formato: I - II - III - IV - V");
    printf("\n");
    scanf("%f - %f - %f - %f - %f", &seq[0], &seq[1], &seq[2], &seq[3], &seq[4]);
    float maior = seq[0];    
    for(int i = 1; i < 5; i++)
    {
        if(maior < seq[i])
            maior = seq[i];
    }
    printf("\n Maior: %.2f", maior);
        float menor = seq[0];    
    for(int i = 1; i < 5; i++)
    {
        if(menor > seq[i])
            menor = seq[i];
    }
    printf("\n Menor: %.2f", menor);
    AT = maior - menor;
    printf("\nA amplitude total é: %.2f", AT);
}
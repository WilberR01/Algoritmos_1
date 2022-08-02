#include <stdlib.h>
#include <stdio.h>

const int g = 10;

int main()
{
    float V, t;
    int esc = 1;
    while(esc < 2)
    {
        printf("Qual o tempo(segundos) de queda do corpo em questão?\n");
        scanf("%f", &t);
        V = g*t;
        printf("A velocidade final do corpo é: %.2f m/s.\n", V);
        printf("\nRepetir cálculo? Sim (1) ---- Não (2)\n");
        scanf("%d", &esc);
    }
    printf("\nObrigado por utilizar o sistema!");
}
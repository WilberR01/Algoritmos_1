#include <stdio.h>
#include <stdlib.h>

int main()
    {
        float nmr;
        printf("Digite o numero a ser dobrado.\n");
        scanf("%f", &nmr);
        float res = nmr*2;
        printf("\tEste é o seu dobro: %.2f\n", res);

    }
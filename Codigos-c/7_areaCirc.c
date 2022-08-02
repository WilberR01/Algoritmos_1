#include <stdio.h>
#include <stdlib.h>

const float PI = 3.14;

float pegaRaio()
{
    float r;
    printf("Caluladora de Area de Circunferência.\n");
    printf("Insira o Raio da sua cirunferência: ");
    scanf("%f", &r);
    if(r<=0){
        printf("\nEste raio é inválido!\n\n");
        pegaRaio();
    }else
        return r;
}

int main(){

    float area = 0;
    float r = pegaRaio();
        area = PI*r*r;
        printf("Area = %.3f unidades de área.", area);
}
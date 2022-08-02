#include <stdio.h>
#include <stdbool.h>

int main()
{
    int numero, contrario = 0;
    bool neg;
    printf("Digite o seu numero de 3 digitos:\n");
    scanf("%d", &numero);
    if(numero<0){
        neg = 1;
        numero *= (-1);
    }
    else 
        neg = 0;
    while (numero != 0)
    {
        contrario *= 10;;
        contrario += numero%10;
        numero /= 10;
    }
    (neg)? contrario *= (-1): contrario;
    printf("O inverso é: %d", contrario);
}
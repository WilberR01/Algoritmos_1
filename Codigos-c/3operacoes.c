#include <stdio.h>

int main()
    {
        float vlr1, vlr2;
        printf("Insira o primeiro numero real: \n");
        scanf("%f", &vlr1);
        printf("Insira o segundo numero real: \n");
        scanf("%f", &vlr2);
        float soma, subtrai, multiplica, divide;
        soma = vlr1 + vlr2;
        subtrai = vlr1 - vlr2;
        multiplica = vlr1*vlr2;
        divide = vlr1/vlr2;
        printf("A soma é: %.2f\nA subtração é: %.2f\nA multiplicação é: %.2f\nA divisão é: %.2f\n\n", soma, subtrai, multiplica, divide);
        printf("\tTodos os valores até a segunda casa decimal!\n\tObrigado por utilizar nosso sistema.\n\n");
    }
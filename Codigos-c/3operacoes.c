#include <stdio.h>  // Inclui a biblioteca de entrada e saída padrão, que fornece funções para entrada e saída de dados.

int main()  // A função principal do programa.
{
    float vlr1, vlr2;  // Declara duas variáveis de ponto flutuante para armazenar os números inseridos pelo usuário.
    
    printf("Insira o primeiro número real: \n");  // Exibe uma mensagem na tela para que o usuário insira o primeiro número real.
    scanf("%f", &vlr1);  // Lê o valor inserido pelo usuário e o armazena na variável 'vlr1'.
    
    printf("Insira o segundo número real: \n");  // Exibe uma mensagem para que o usuário insira o segundo número real.
    scanf("%f", &vlr2);  // Lê o valor inserido pelo usuário e o armazena na variável 'vlr2'.

    float soma, subtrai, multiplica, divide;  // Declara quatro variáveis de ponto flutuante para armazenar os resultados das operações.
    
    soma = vlr1 + vlr2;  // Calcula a soma dos dois números e armazena o resultado na variável 'soma'.
    subtrai = vlr1 - vlr2;  // Calcula a subtração dos dois números e armazena o resultado na variável 'subtrai'.
    multiplica = vlr1 * vlr2;  // Calcula a multiplicação dos dois números e armazena o resultado na variável 'multiplica'.
    divide = vlr1 / vlr2;  // Calcula a divisão dos dois números e armazena o resultado na variável 'divide'.
    
    printf("A soma é: %.2f\nA subtração é: %.2f\nA multiplicação é: %.2f\nA divisão é: %.2f\n\n", soma, subtrai, multiplica, divide);  // Exibe os resultados das operações na tela com duas casas decimais.
    printf("\tTodos os valores até a segunda casa decimal!\n\tObrigado por utilizar nosso sistema.\n\n");  // Exibe uma mensagem de agradecimento.

    return 0;  // Retorna 0 para indicar que o programa foi executado com sucesso.
}

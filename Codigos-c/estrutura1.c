//bibliotecas básicas
#include <stdio.h>
#include <stdlib.h>

void mediaIndividual(); //declara a existência da função de média

//função principal executada
int main()
{
    
    int saida = 1; //variável responsável por manter as entradas até o usuário pedir pra sair.
    printf("Bem Vindo a calculadora de medias.\n");

    //chamada da função de calculo de média e "botão de saída" da aplicação.

    /*Quando esse loop se inicia, o usuáro pode calcular a média para vários
    até que ele deseje sair, ao digitar 0 para a pergunta final, ele muda a variável
    que satisfaz a condição e a função while termina.*/

    while(saida != 0)
    {
        mediaIndividual(); //chama o cálculo de média
        printf("\nDeseja calcular uma nova media?\n1 - Sim | 0 - Nao\n"); //mantém ou não a permanência na aplicação
        scanf("%d", &saida);
    }
}

void mediaIndividual() //função para calcular cada média de repetitivamente
{
    char Aluno[30]; //nome do aluno
    int saidaf = 1; //variável responsável por manter as entradas até o usuário pedir pra sair.
    int qtd_Notas = 0; //contador de notas, incrementa a cada ciclo da função e serve como divisor da média
    float soma, media = 0; //soma para contabilizar o total geral de notas e a média para o resultado do cálculo
    
     //identificação do aluno, em um sistema aprimorado poderia ser armazenado num banco de dados
    printf("Digite o nome do Aluno: ");
    scanf("%30[^\n]%*c", Aluno); // leitura que garante que o programa ignore espaços para entradas de nomes compostos
    while (saidaf != 0)
    {
        float nota; //nota única de cada ciclo
        qtd_Notas++; //incremento da quantidade de notas inseridas
        printf("Qual a nota %d deste aluno?(Utilize ponto para as casas decimais!)\n", qtd_Notas);
        scanf("%f", &nota);
        soma += nota;
        printf("Registrado!\nAdicionar outra nota?\n1 - Sim | 0 - Nao\n"); //botão de saída
        scanf("%d", &saidaf);
    }
    //cálculo de média e exibição (%.2 para limitar em duas casas decimais)
    media = soma/qtd_Notas;
    printf("A media de %s e: %.2f", Aluno, media);
}
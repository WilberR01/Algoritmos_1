#include <stdlib.h>
#include <stdio.h>

int main()
{
    char aluno1[30], aluno2[30];
    float n1, n2, n3, media;
    printf("\t\tOlá\nPor Favor, insira seu nome: ");
    scanf("%s", &aluno1);
    scanf("%s", &aluno2);
    printf("Bem vindo %s\nInsira agora sua nota N1: ", aluno1);
    scanf("%f", &n1);
    printf("Nota N2: ");
    scanf("%f", &n2);
    printf("Nota N3: ");
    scanf("%f", &n3);
    media = (n1 + n2 + n3)/3;
    printf("\n%s %s, sua média na disciplina em questão é: %.2f", aluno1, aluno2, media);
}
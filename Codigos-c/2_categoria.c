#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age;
    printf("\t\tREDONDO\n\tTreinamentos esportivos.\n");
    printf("Insira sua idade para decidirmos qual a sua categoria :)\nIdade: ");
    scanf("%d", &age);
    if(age <= 4)
        printf("Você é muito jovem pra participar dos nossos treinamentos :|");
    else if(age > 4 && age <= 13)
        printf("Você se encaixa na categoria infantil! (%d anos)", age);
    else if(age > 13 && age <= 17)
        printf("Você se encaixa na categoria juvenil! (%d anos)", age);
    else
        printf("Você se encaixa na categoria Senior! (%d anos)", age);
}
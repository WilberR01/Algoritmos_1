#include <stdio.h>
#include <stdlib.h>

int main ()
{   
    
    char times[][11]= {"Flamengo","São Paulo","Vila Nova","Corinthians"};
    int esc;

    printf("Bem Vindo ao sistema de seleção de times! \nPor favor selecione um dos times a seguir:\n");
    printf("1 - Flamengo\n2 - São Paulo\n3 - Vila Nova\n4 - Corinthians\nUtilize os números para selecionar: ");
    scanf("%d", &esc);
    printf("Seu time é %s\n\n", times[esc - 1]);
    
}
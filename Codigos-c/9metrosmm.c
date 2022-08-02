#include <stdio.h>



int main()
{
    int esc = 1;
    float metros, milimetros;
    printf("\n\t\tConversor - Metros em milimetros.\n\n");
    while(esc == 1)
    {
        printf("\n Insira seu valor em metros: ");
        scanf("%f", &metros);
        milimetros = metros * 1000;
        printf("\n Isso equivale a %.0f milimetros.", milimetros);
        printf("\n\nRepetir? \tSim (1) -- Não (2)\n");
        scanf("%d", &esc);
    }
return 0;
}
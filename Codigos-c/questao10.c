#include <stdio.h>

int main()
{
    int pares = 0, impares = 0;
    for(int i = 1; i <= 10; i++)
    {
        int numeroUsuario;
        printf("\n(%d)Digite seu número: ", i);
        scanf("%d", &numeroUsuario);
        if(numeroUsuario%2 == 1)
            impares += 1;
        else
            pares += 1;
    }
    printf("\nPares: %d\nImpares: %d", pares, impares);
}
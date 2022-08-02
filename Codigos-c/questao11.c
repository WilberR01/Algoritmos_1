#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    srand(time(NULL));
    for(int i = 0; i < 6;i++)
    {
        printf("O número sorteado foi: %d\n", rand()%100);
    }
}
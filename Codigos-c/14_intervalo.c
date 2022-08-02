#include <stdlib.h>
#include <stdio.h>



int main()
{
    float userNum;
    printf("\tTeste de intervalo numérico.\nInsira seu numero para saber se ele está entre 100 e 200: ");
    scanf("%f", &userNum);
    if(userNum > 100 && userNum < 200)
        printf("Seu número está dentro do intervalo. (100 < %.2f < 200)", userNum);
    else    
        printf("Seu número não faz parte desse intervalo.");
}
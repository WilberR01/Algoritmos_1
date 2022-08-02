#include <stdlib.h>
#include <stdio.h>
#include <windows.h>

int main()
{
    float valor;
    printf("\nQUER SABER SE SEU NUMEROZINHO É MAIOR QUE 10");
    Sleep(1000);
        for(int i=0; i<6; i++)
    {
        printf("?");
        Sleep(500);
    }
    printf("\n|\tINSIRA ELE AQUI!!!!\n|\n|_______> ");
    scanf("%f", &valor);
    Sleep(50);
    if(valor<0){
        printf("amigo D:\n");
        for(int i=0; i<3; i++)
        {
        printf(".");
        Sleep(600);
        }
        printf("este numero\n");
        Sleep(1100);
        printf("é negativo. >:/\n");
        Sleep(1200);
        printf("OBVIO QUE É MENOR QUE 10!!!!!!!!!!!!!!!!\n");
    }
    else
    {
    printf(".....pensando muito forte.....");
    Sleep(3000);
    printf("\n");
    printf("RUFEM OS TAMBORES!!");
    Sleep(3000);
    printf("\nSeu número é");
    for(int i=0; i<20; i++)
    {
        printf(".");
        Sleep(170);
    }
    (valor < 10)? printf("MENOR QUE DEZ AAAAAAAAAAAAAAA\n"): printf("maior que 10 :(((((\n");
    }
    Sleep(1150);
    printf("Era so isso\n");
    Sleep(800);
    printf("Tenha um bom dia\n");
    Sleep(700);
    printf("adeus. >:|");
}
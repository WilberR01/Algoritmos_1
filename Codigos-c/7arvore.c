#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>

    int main(){

        //Usuário diz qual a altura da árvore e depois o sistema desenha seguindo a especificação.

        //"n" sendo a quantidade de linhas desejadas.
        // "j" o número da "coluna".
        // "i" o número da "linha".
        
        int n, j, i;
        printf("Qual a altura da árvore?\n");
        scanf("%d", &n);
        

        for(i = 1; i <= n; i++)
        {
            for(j = 1; j <= 2*n - 1; j++)
            {
                if(j >= n-(i-1) && j <= n+(i-1))
                {
                    printf("*");
                }else
                    {
                    printf(" ");
                    }
            }
        Sleep(30);
        printf("\n");
        
        }
        
        for(j = 1 ; j <= 2*n - 1; j++)
        {
            if(j == n){
                printf("|");
            }else{
                printf(" ");
            }
        }
            
    }

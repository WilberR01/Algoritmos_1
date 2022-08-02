

/*Obs: por algum motivo as opções estão sendo cortadas no meu terminal logo após escolher, eu abri o aplicativo executável no cmd e 
funcionou normal, um amigo meu tbm abriu no vscode dele e funcionou, caso não funcione no seu terminal, tenta usar o .exe.*/


#include <stdio.h>
#include <stdlib.h>

void itens()
    {
        printf("\n\t1)Clientes.\n\t2)Faturas\n\t3)Sair\n");
    }

int escolha()
    {
        int esc;
        int valido = 0;
            while(valido == 0){
                scanf(" %d", &esc);
                switch(esc){
                    case 1:
                    case 2:
                    case 3:
                    return esc;
                    default:
                    printf("Opcao não reconhecida.\n");
                    itens();
                }
            }
    }
int main()
    {
        int esc;
        printf("\tOlá, bem vindo a pagina principal!\n\n");
        system ("pause");
        printf("Qual das operações deseja fazer?\n");
        itens();
        while(esc < 3)
            {
                esc = escolha();
                if(esc == 1){
                    printf("João E. (11 984576321)\n");
                    printf("Marcia T. (31 965874132)\n");
                    printf("Tayler P. (63 988654712)\n");
                    }
                if(esc == 2){
                    printf("Fatura a vencer: 03/05/22 (cod. 88451125523)\nUltima fatura paga: 25/04/22\n");
                    }
                itens();

            }
    printf("Obrigado por utilizar nosso sistema!");
    return 0;
    }
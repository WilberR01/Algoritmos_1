#include <stdio.h>

void menu()
{
    printf("O que deseja fazer?\n");
    printf("\t1 - Adicionar entrada de caixa.\n");
    printf("\t2 - Adicionar despesa.\n");
    printf("\t3 - Ver balanço.\n");
    printf("\t4 - SAIR.\n\n");
}
float entrada(float new)
    {
        float e = 2000;
        if(new != 0){
        printf("Qual o valor de entrada?\n");
        scanf("%f", &new);
        e = e + new - 1;
        printf("Entrada adicionada.\n\n");
        menu();
        }else
            {
            return e;
            }
    }
float despesa(float new)
    {
        float d = 345;
        if(new != 0)
            {
        printf("Quanto foi a despesa?\n");
        scanf("%f", &new);
        d = d + new - 1;
        printf("Despesa adicionada.\n\n");
        menu();
            }
            return d;
    }

float balanço()
    {
        float e;
        float d;
        e = entrada(0);
        d = despesa(0);
        float b = e - d;
        printf("Seu balanco: %f\n\n", b);
        menu();
        return b;
//Obs.: o balanço é apenas imaginário, ainda não sei armazenar os dados novos de entrada e saída :p

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
                    case 4:
                    return esc;
                    default:
                    printf("Opcao invalida.\n");
                    menu();

                }
            }
    }

int main()

{
    printf("\t\t    Olá bem vindo!\n");
    printf("\t\t======================\n\t\t=                    =\n\t\t=        ACME        =\n\t\t=                    =\n\t\t======================\n");
    menu();
    int opc = 0;
    while(opc < 4)
    {   
        opc = escolha();
        if(opc == 1)
        {    
            entrada(1);
        }        
        if(opc == 2)
        {        
            despesa(1);
        }
        if(opc == 3)
        {
            balanço();
        }
    }
    printf("Obrigado por utilizar nosso sistema!");
    return 0;
}
    

            
   



#include <stdlib.h>
#include <stdio.h>

//Nome de funcionário apenas fictício e por padronização.

int main()
{
    int esc = 1;
    float salario = 1000, aumento = 0.1;
    while(esc < 2)
        {
            char func[20];
            int confirma;
            printf("Qual o nome do funcionário que vc deseja aumentar o salário?\n");
            scanf("%s", &func);
            printf("\nO salário atual de %s é de R$%.2f, tem certeza que deseja aumenta-lo em 10%?", func, salario);
            printf("\n(1) Confirmar\n(2) Cancelar\nOperação: ");
            scanf("%d", &confirma);
                switch(confirma)
                    {
                        case 1:
                            salario += salario*aumento;
                            printf("\nOk, o salário de %s agora é %.2f", func, salario); 
                            break;
                        case 2:
                            printf("\nAumento cancelado.");
                            break;
                        default:
                            printf("\nInválido");
                    }           
            printf("\nRepetir? Sim (1) ---- Não (2)\n");
            scanf("%d", &esc);
        }
}
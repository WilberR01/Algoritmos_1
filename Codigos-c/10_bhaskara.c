#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
    {
        float a, b , c, dt, x_1, x_2;
        int R = 1;
        while(R == 1)
            {
                printf("Insira os valores de a, b e c no formato 'a,b,c'.\n");
                scanf("%f,%f,%f", &a, &b, &c);

                dt = (b*b)-(4*a*c);
                if(dt < 0)
                    {
                        printf("Raiz de delta não real.\n\n");
                    } else  
                        {
                            x_1 = ((-b) + sqrt(dt))/(2*a);
                            x_2 = ((-b) - sqrt(dt))/(2*a);
                        
                        if(x_1 == x_2)
                            {
                                printf("X1 = X2 = %.2f\n", x_1);
                            }
                        else{
                                printf("\nPrimeiro valor de x é: %.2f\n", x_1);
                                printf("Segundo valor de x é: %.2f\n", x_2);
                            }
                        }    
                printf("\nDeseja repetir a operação?\nSim(1) --- Não(2)\n");
                int sim;
                scanf("%d", &sim);
                R = sim;
            }
    }
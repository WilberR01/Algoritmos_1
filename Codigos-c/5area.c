#include <stdio.h>

int main(){
    
    float lado1, lado2, area;

    printf("insira o lado 1 \n");
    scanf("%f", &lado1);
    printf("insira o lado 2 \n");
    scanf("%f", &lado2);

    area = lado1*lado2;

    printf("sua area total é: %.2f metros quadrados \n", area);

return 0;

}

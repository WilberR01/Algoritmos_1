#include <stdio.h>

float dec_to_bin(float n){
    if(n > 1) {
        dec_to_bin(n/2);
    }
    return n;
}

int main()
{
    float num;
    printf("Digite um número em base 10: ");
    scanf("%f", &num);
    printf("O número %f em base 2 é: %f", num, dec_to_bin(num));
    printf("\n");
    return 0;
}
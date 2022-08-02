   #include <stdio.h>
   #include <stdlib.h>
   
   int main(){

        int A;
        printf("insira seu numero inteiro: ");
        scanf("%d", &A);
        if(A%2){
            printf("Seu numero é impar. \nTenha um bom dia.");
        }else{
            printf("Seu numero é par. \nTenha um bom dia.\n");
        }
    return 0;
   }
#include <stdio.h>
#include <windows.h>

double criaSenha()
{
    
    int senha, s_01, s_02;
    printf("Digite sua nova senha numérica: ");
    scanf("%d", &s_01);
    printf("Confirme sua senha: ");
    scanf("%d", &s_02);
    if(s_01 != s_02){
        printf("\nAs senhas não são iguais.\nTente Novamente.\n");
        criaSenha();
    }
    else
        return senha = s_01;
}

int main()
{
    system("cls");
    int ten;
    int pwd = criaSenha();
    for(int i = 0; i<200; i++){
        printf("\n");}
    printf("Digite sua senha: ");
    scanf("%d", &ten);
    (ten == pwd)? printf("\tLogin efetuado!\n\tBem vindo!\n"):printf("Senha incorreta.\nTente novamente mais tarde.");
}
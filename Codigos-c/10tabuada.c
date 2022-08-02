#include <stdio.h>
#include <windows.h>

int main()
{
    int T = 5;
    int M;
    int R;
    printf("Esta é a tabuada do 5:\n");
    Sleep(100);
    for(M = 1; M<=10; M++)
    {
        R = M * T;
        printf("\n5x%d=%d", M,R);
        Sleep(35);
    }
}
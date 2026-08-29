#include <stdio.h>

int main()
{
    int num1;
    int num2;
    
    puts("Entre com o primeiro inteiro:");
    scanf("%d", &num1);
    
    puts("Entre com o segundo inteiro:");
    scanf("%d", &num2);
    
    int multiplo = num1 % num2;
    
    switch (multiplo)
    {
    case 0 :
         puts("Seu primeiro numero é multiplo do segundo!");
         break;
        
    default :
        puts("Seu primeiro numero NAO é multiplo do segundo!");
    }
    return 0;
}
#include <stdio.h> 

int main()
{
    float c;
    
    puts("Entre com o grau em celsius:");
    scanf("%f", &c);
    
    float f = (9 * c + 160) / 5;
    
    printf("Convertido para Fahrenheit: %.1f\n", f);
    
    return 0;
}
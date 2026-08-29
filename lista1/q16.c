#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    
    puts("Entre com o numero inteiro:");
    scanf("%d", &num);
    
    printf("Numero absoluto: %d\n", abs(num));
    
    return 0;
}
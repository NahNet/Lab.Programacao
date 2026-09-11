#include <stdio.h>

int main()
{
    int A, B;
    
    puts("Digite o valor de A:");
    scanf("%d", &A);
    
    puts("Digite o valor de B:");
    scanf("%d", &B);
    
    A = A + B;
    B = A - B;
    A = A - B;
    
    printf("A = %d\n", A);
    printf("B = %d\n", B);
    
    return 0;
    
}
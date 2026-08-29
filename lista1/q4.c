#include <stdio.h>

int main(){

    float conta;

    puts("Digite o valor da conta:");
    scanf("%f", &conta);

    float total = conta * (10.0/100);

    printf("Subtotal: %.2f\n", conta );
    printf("Total: %.2f\n", conta + total );

    return 0;
}
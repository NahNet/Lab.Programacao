#include <stdio.h>

int main(){

int x;

    puts("Entre com um numero inteiro:");
    scanf("%d", &x);

    printf("O triplo: %d\n ", x * 3);
    printf("O quadrado: %d\n ", x*x );
    printf("O meio: %.1f\n ",(float) x / 2);

return 0; 

}
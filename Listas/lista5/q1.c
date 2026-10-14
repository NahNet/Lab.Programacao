#include <stdio.h>

int main(){

    int y, x;
    int *yPtr, *xPtr, soma;


    printf("Digite um valor inteiro:");
    scanf("%d", &x);

    printf("Digite um valor inteiro:");
    scanf("%d", &y);

    soma = y + x;

    int *somaPtr = &soma;

    printf("soma: %d\n", soma);
    printf("Endereço antigo x: %p\n", xPtr);
    printf("Endereço antigo y: %p\n", yPtr);
    printf("Endereço novo da soma: %p\n", somaPtr);


    return 0;
}
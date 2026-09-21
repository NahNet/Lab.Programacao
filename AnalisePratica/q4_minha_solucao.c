#include <stdio.h>

int main(){
    int numero;
    int soma = 0, contador = 0;

    while (scanf("%d", &numero) == 1 && numero != -1){
        if (numero >= 0 && numero <= 255){
            soma += numero;
            contador++;
        }
    }

    printf("Soma = %d\n", soma);
    printf("Quantidade = %d\n", contador);

    return 0;
}
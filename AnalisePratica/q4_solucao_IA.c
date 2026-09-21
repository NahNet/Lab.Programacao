#include <stdio.h>

int main(void) {

    int numero;
    int soma = 0;
    int contador = 0;

    do {

        scanf("%d", &numero);

        if (numero != -1) {

            if (numero >= 0) {

                if (numero <= 255) {

                    soma += numero;
                    contador++;
                }
            }
        }

    } while (numero != -1);

    printf("Soma = %d\n", soma);
    printf("Quantidade = %d\n", contador);

    return 0;
}
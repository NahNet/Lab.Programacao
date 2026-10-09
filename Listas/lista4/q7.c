#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#define TAM 3

int main(void) {
    int numeros[TAM];
    int soma = 0;
    double mediaA, mediaG;
    double produto = 1;

    srand(time(NULL));

    for (int i = 0; i < TAM; i++) {
        numeros[i] = rand() % 20;
        printf("%d ", numeros[i]);

        soma += numeros[i];
        produto *= numeros[i];
    }

    mediaA = (double)soma / TAM;
    mediaG = cbrt(produto);

    printf("\nMedia aritmetica: %.2f\n", mediaA);
    printf("Media geometrica: %.2f\n", mediaG);

    return 0;
}
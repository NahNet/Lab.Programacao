#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 100

int main(void) {
    int numeros[TAM];
    int minimo, maximo, menor, temp;

    printf("Digite o limite minimo: ");
    scanf("%d", &minimo);

    printf("Digite o limite maximo: ");
    scanf("%d", &maximo);

    if (minimo > maximo) {
        printf("Intervalo invalido.\n");
        return 1;
    }

    srand(time(NULL));

    for (int i = 0; i < TAM; i++) {
        numeros[i] = minimo + rand() % (maximo - minimo + 1);
    }

    for (int i = 0; i < TAM - 1; i++) {
        menor = i;

        for (int j = i + 1; j < TAM; j++) {
            if (numeros[j] < numeros[menor]) {
                menor = j;
            }
        }

        temp = numeros[i];
        numeros[i] = numeros[menor];
        numeros[menor] = temp;
    }

    printf("Vetor ordenado:\n");

    for (int i = 0; i < TAM; i++) {
        printf("%d ", numeros[i]);
    }

    printf("\n");
  



  puts("Ordenação do vetor com o método Bubble Sort:");

    printf("Digite o limite minimo: ");
    scanf("%d", &minimo);

    printf("Digite o limite maximo: ");
    scanf("%d", &maximo);

    if (minimo > maximo) {
        printf("Intervalo invalido.\n");
        return 1;
    }

    srand(time(NULL));

    for (int i = 0; i < TAM; i++) {
        numeros[i] = minimo + rand() % (maximo - minimo + 1);
    }

    for (int i = 0; i < TAM - 1; i++) {
        for (int j = 0; j < TAM - 1 - i; j++) {
            if (numeros[j] > numeros[j + 1]) {
                temp = numeros[j];
                numeros[j] = numeros[j + 1];
                numeros[j + 1] = temp;
            }
        }
    }

    printf("Vetor ordenado:\n");

    for (int i = 0; i < TAM; i++) {
        printf("%d ", numeros[i]);
    }

    printf("\n");
    return 0;
}
#include <stdio.h>

int main(void) {
    int vetor[5];
    int *p = vetor;
    int temp;

    for (int i = 0; i < 5; i++) {
        printf("Digite o %dº numero: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    for (int i = 0; i < 5 - 1; i++) {
        for (int j = 0; j < 5 - 1 - i; j++) {
            if (*(p + j) > *(p + j + 1)) {
                temp = *(p + j);
                *(p + j) = *(p + j + 1);
                *(p + j + 1) = temp;
            }
        }
    }

    printf("\nVetor ordenado em ordem crescente: ");

    for (int i = 0; i < 5; i++) {
        printf("%d ", *(p + i));
    }

    printf("\n");

    return 0;
}

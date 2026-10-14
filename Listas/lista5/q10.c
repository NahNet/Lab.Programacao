
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 7
#define TAM 14

int main(void) {
    int X[TAM], F[N] = {0};
    int *xPtr = X;
    int *fPtr = F;

    srand(time(NULL));

    for (int i = 0; i < TAM; i++) {
        *(xPtr + i) = rand() % N;
        (*(fPtr + *(xPtr + i)))++;
    }

    printf("Vetor X: ");
    for (int i = 0; i < TAM; i++) {
        printf("%d ", *(xPtr + i));
    }

    printf("\nVetor F: ");
    for (int i = 0; i < N; i++) {
        printf("%d ", *(fPtr + i));
    }

    printf("\n");

    return 0;
}

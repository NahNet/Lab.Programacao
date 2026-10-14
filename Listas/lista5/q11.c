#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 7
#define TAM 14

int main(void) {
    int X[TAM], Y[TAM], M[N][N] = {0};
    int *xPtr = X;
    int *yPtr = Y;
    int (*mPtr)[N] = M;

    srand(time(NULL));

    for (int i = 0; i < TAM; i++) {
        *(xPtr + i) = rand() % N;
        *(yPtr + i) = rand() % N;

        (*(*(mPtr + *(yPtr + i)) + *(xPtr + i)))++;
    }

    printf("Vetor X: ");
    for (int i = 0; i < TAM; i++) {
        printf("%d ", *(xPtr + i));
    }

    printf("\nVetor Y: ");
    for (int i = 0; i < TAM; i++) {
        printf("%d ", *(yPtr + i));
    }

    printf("\nMatriz M:\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d ", *(*(mPtr + i) + j));
        }
        printf("\n");
    }

    return 0;
}

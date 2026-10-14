
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 7
#define TAM 14

int main(void) {
    int X[TAM], Y[TAM], M[N][N] = {0};
    int r, valor;
    int *xPtr = X;
    int *yPtr = Y;
    int (*mPtr)[N] = M;

    srand(time(NULL));

    for (int i = 0; i < TAM; i++) {
        *(xPtr + i) = rand() % N;

        r = rand() % 10 + 1;
        valor = *(xPtr + i);

        if (r <= 3) {
            *(yPtr + i) = valor;
        } else if (r <= 5) {
            *(yPtr + i) = valor - 1;
        } else if (r <= 7) {
            *(yPtr + i) = valor + 1;
        } else if (r == 8) {
            *(yPtr + i) = valor;
        } else if (r == 9) {
            *(yPtr + i) = valor - 2;
        } else {
            *(yPtr + i) = valor + 2;
        }

        if (*(yPtr + i) < 0) {
            *(yPtr + i) = 0;
        } else if (*(yPtr + i) >= N) {
            *(yPtr + i) = N - 1;
        }

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

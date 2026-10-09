
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define LIN 3
#define COL 3

int main(void) {
    int matriz[LIN][COL];
    int x, contador = 0;

    srand(time(NULL));

    printf("Matriz gerada:\n");

    for (int i = 0; i < LIN; i++) {
        for (int j = 0; j < COL; j++) {
            matriz[i][j] = rand() % 20;
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    printf("Digite o valor que deseja procurar: ");
    scanf("%d", &x);

    for (int i = 0; i < LIN; i++) {
        for (int j = 0; j < COL; j++) {
            if (matriz[i][j] == x) {
                contador++;
            }
        }
    }

    printf("O valor %d aparece %d vez(es) na matriz.\n", x, contador);

    return 0;
}
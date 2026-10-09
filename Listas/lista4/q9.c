
#include <stdio.h>
#define LIN 3
#define COL 3

int main(void) {
    int matriz[LIN][COL];

    for (int i = 0; i < LIN; i++) {
        for (int j = 0; j < COL; j++) {
            printf("Digite o elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("Diagonal principal: ");

    for (int i = 0; i < LIN; i++) {
        printf("%d ", matriz[i][i]);
    }

    printf("\n");
    return 0;
}
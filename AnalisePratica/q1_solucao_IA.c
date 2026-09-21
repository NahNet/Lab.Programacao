#include <stdio.h>

int main(void) {

    int R, G, B;
    int M;

    scanf("%d %d %d", &R, &G, &B);
    scanf("%d", &M);

    R = (R & ~1) | (M & 1);
    G = (G & ~1) | ((M >> 1) & 1);
    B = (B & ~1) | ((M >> 2) & 1);

    printf("%d %d %d\n", R, G, B);

    return 0;
}
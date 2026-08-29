#include <stdio.h>

int main()
{
    int x, n;

    printf("Digite x: ");
    scanf("%d", &x);

    printf("Digite n: ");
    scanf("%d", &n);

    printf("Resultado: %d\n", x << n);

    return 0;
}
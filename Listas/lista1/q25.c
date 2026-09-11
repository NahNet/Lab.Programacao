#include <stdio.h>
#include <math.h>

int main()
{
    float x1, y1, x2, y2;
    float distancia;

    printf("Digite x1: ");
    scanf("%f", &x1);

    printf("Digite y1: ");
    scanf("%f", &y1);

    printf("Digite x2: ");
    scanf("%f", &x2);

    printf("Digite y2: ");
    scanf("%f", &y2);

    distancia = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));

    printf("Distancia: %f\n", distancia);

    return 0;
}
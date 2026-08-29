#include <stdio.h>
#include <math.h>

int main()
{
    float x, y, z;
    float media_aritmetica, media_geometrica;

    printf("Digite o primeiro numero: ");
    scanf("%f", &x);

    printf("Digite o segundo numero: ");
    scanf("%f", &y);

    printf("Digite o terceiro numero: ");
    scanf("%f", &z);

    media_aritmetica = (x + y + z) / 3;

    media_geometrica = pow(x * y * z, 1.0 / 3.0);

    printf("Media aritmetica: %.2f\n", media_aritmetica);
    printf("Media geometrica: %.2f\n", media_geometrica);

    return 0;
}
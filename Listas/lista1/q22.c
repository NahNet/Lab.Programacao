#include <stdio.h>

int main()
{
    int num;
    int centena, dezena, unidade;

    printf("Digite um numero de tres digitos: ");
    scanf("%d", &num);

    centena = num / 100;
    dezena = (num / 10) % 10;
    unidade = num % 10;
    
    printf("Numero invertido: %d%d%d\n", unidade, dezena, centena);

    return 0;
}
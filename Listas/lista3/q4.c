#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    int n, x, q, xr, erro;
    int somaErro = 0;
    float erroMedio;

    printf("Digite a quantidade de amostras: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++){

        printf("\nDigite o valor da amostra %d: ", i + 1);
        scanf("%d", &x);

        q = x >> 4;

        xr = q << 4;

        erro = abs(x - xr);

        somaErro = somaErro + erro;

        printf("Valor original: %d\n", x);
        printf("Valor quantizado: %d\n", q);
        printf("Valor reconstruido: %d\n", xr);
        printf("Erro de quantizacao: %d\n", erro);
    }

    erroMedio = (float)somaErro / n;

    printf("\nErro medio de quantizacao: %.2f\n", erroMedio);

    return 0;
}
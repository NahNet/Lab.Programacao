#include <stdio.h>

int main(void)
{
    int n;

    printf("Quantos numeros? ");
    scanf("%d", &n);

    if (n < 3) {
        printf("E necessario informar pelo menos 3 numeros.\n");
        return 1;
    }

    double numeros[n];

     for (int i = 0; i < n; i++) {
        printf("Digite o numero %d: ", i + 1);
        scanf("%lf", &numeros[i]);
    }

    printf("Medias centradas: ");
    for (int i = 1; i < n - 1; i++) {
        double media = (numeros[i - 1] + numeros[i] + numeros[i + 1]) / 3.0;
        printf("%.2f", media);
        if (i < n - 2)
            printf("s\n");
    }

    return 0;
}
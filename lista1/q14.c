#include <stdio.h>

int main() {

    int dias;
    float bruto, gratificacao, liquido;

    printf("Digite o numero de dias trabalhados: ");
    scanf("%d", &dias);

    bruto = dias * 50.25;

    if (dias <= 10) {
        gratificacao = 0;
    }
    else if (dias <= 20) {
        gratificacao = bruto * 0.20;
    }
    else {
        gratificacao = bruto * 0.30;
    }

    bruto = bruto + gratificacao;

    liquido = bruto - (bruto * 0.10);

    printf("Valor liquido: R$ %.2f\n", liquido);

    return 0;
}
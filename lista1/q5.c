#include <stdio.h>

int main(){

    float altura, resultado;
    int sexo;

    puts("Digite sua altura:");
    scanf("%f", &altura);

    puts("Digite o seu sexo:");
    puts(" 1 - Mulher");
    puts(" 2 - Homem");
    scanf("%d", &sexo);

switch (sexo)
{
case 1 :
    resultado = (62.1 * altura) - 44.7;
    printf("Seu peso ideal é: %.1f\n", resultado);
    break;
case 2 :
    resultado = (72.7 * altura) - 58;
    printf("Seu peso ideal é: %.1f\n", resultado);
    break;
default:
    break;
}

    return 0;
}
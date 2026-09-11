#include <stdio.h>

int main()
{
    int tempo, horas, minutos, segundos;

    printf("Digite o tempo em segundos: ");
    scanf("%d", &tempo);

    horas = tempo / 3600;
    minutos = (tempo % 3600) / 60;
    segundos = tempo % 60;

    printf("%d horas, %d minutos e %d segundos\n",
           horas, minutos, segundos);

    return 0;
}
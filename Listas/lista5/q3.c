
#include <stdio.h>

int main(void) {

    int atual, menor;
    int *menorPtr = &menor;

    
    printf("Digite um numero (0 para encerrar): ");
    scanf("%d", &atual);

    if (atual == 0) {
        printf("Nenhum numero foi informado.\n");
        return 0;
    }

    *menorPtr = atual;

     while (1) {
        printf("Menor valor: %d\n", *menorPtr);
        printf("Digite outro numero (0 para encerrar): ");
        scanf("%d", &atual);

        if (atual == 0) {
            break;
        }

        if (atual < *menorPtr) {
            *menorPtr = atual;
        }
    }
    

    printf("Menor valor final: %d\n", *menorPtr);

    return 0;
}

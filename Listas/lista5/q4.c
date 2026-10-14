#include <stdio.h>
#define TAM 4

int main(void) {
    int inteiros[TAM];
    char caracteres[TAM];
    double reais[TAM];


    printf("Digite %d inteiros:\n", TAM);
    for (int i = 0; i < TAM; i++) {
        scanf("%d", &inteiros[i]);
    }



    printf("Vetor de inteiros:\n");
    for (int i = 0; i < TAM; i++) {
        printf("Valor: %d | Endereco: %p\n",
               *(inteiros + i), (void *)(inteiros + i));
    }



    printf("Vetor de caracteres:\n");
    for (int i = 0; i < TAM; i++) {
        caracteres[i] = 'A' + i;
        printf("Valor: %c | Endereco: %p\n",
               *(caracteres + i), (void *)(caracteres + i));
    }



    printf("Vetor de reais:\n");
    for (int i = 0; i < TAM; i++) {
        reais[i] = (i + 1) * 1.5;
        printf("Valor: %.2f | Endereco: %p\n",
               *(reais + i), (void *)(reais + i));
    }

    return 0;
}

#include <stdio.h>
#define TAM 100


int main(void) {

    char texto[TAM];
    char *Ptr;
    int tamanho = 0;


    printf("Digite uma string: ");
    scanf("%99\n", texto);

    Ptr = texto;

    while (*Ptr != '\0') {
        tamanho++;
        Ptr++;
    }

    printf("Tamanho da string: %d\n", tamanho);

    return 0;
}
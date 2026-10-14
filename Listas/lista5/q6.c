#include <stdio.h>

int main(void) {
    char original[100];
    char copia[100];

    char *origemPtr = original;
    char *copiaPtr = copia;

    printf("Digite uma palavra: ");
    scanf("%99s", original);

    while (*origemPtr != '\0') {
        *copiaPtr = *origemPtr;

        origemPtr++;
        copiaPtr++;
    }

    *copiaPtr = '\0';

    printf("String original: %s\n", original);
    printf("String copiada: %s\n", copia);

    return 0;
}

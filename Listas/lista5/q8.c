
#include <stdio.h>

int main(void) {

    char str[100];
    char caractere;

    char *Ptr = str;
    int encontrou = 0;

    printf("Digite uma palavra: ");
    scanf("%99s", str);

    printf("Digite o caractere que deseja buscar: ");
    scanf(" %c", &caractere);

    while (*Ptr != '\0') {
        if (*Ptr == caractere) {
            encontrou = 1;
            break;
        }

        Ptr++;
    }

    if (encontrou) {
        printf("Caractere encontrado na string!\n");
    } else {
        printf("Caractere nao encontrado na string.\n");
    }

    return 0;
}

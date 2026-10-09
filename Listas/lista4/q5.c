
#include <stdio.h>
#include <string.h>
#define TAM 20

int main(void) {
    char st1[TAM], st2[TAM], resultado[TAM * 2];
    int i = 0;

    puts("Digite a primeira palavra:");
    scanf("%19s", st1);

    puts("Digite a segunda palavra:");
    scanf("%19s", st2);

    for (int j = 0; st1[j] != '\0'; j++) {
        resultado[i] = st1[j];
        i++;
    }

    for (int j = 0; st2[j] != '\0'; j++) {
        resultado[i] = st2[j];
        i++;
    }

    resultado[i] = '\0';

    printf("String concatenada: %s\n", resultado);


    puts("\n COM STRCAT() :");

    strcat(st1, st2);

    printf("String concatenada: %s\n", st1);




    return 0;
}
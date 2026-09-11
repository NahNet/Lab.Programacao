#include <stdio.h>

int main(){

    int num;

    printf("Digite um número inteiro:");
    scanf("%d", &num);

    printf("Hexadecimal: %X\n" ,num);
    printf("Octal: %o\n", num);

    return 0;
}


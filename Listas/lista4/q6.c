#include <stdio.h>
#define TAM 100

int main(){

    char palavra[TAM];
    int tamanho = 0;

    printf("Digite uma palavra de no máximo 100 letras:");
    scanf("%99s", palavra);

    while(palavra[tamanho] != '\0'){
        tamanho++;
    }

    printf("A palavra invertida:");

    for(int i = tamanho - 1 ; i>=0; i--){
        printf("%c", palavra[i]);
    }


    return 0;
}
#include <stdio.h>
#define TAM 20

int main(){

    char palavra[TAM];
    char caractere;
    int quantidade = 0;

    printf("Digite uma palavra de no máximo 20 letras:");
    scanf("%s", palavra);

    for (int i=0; palavra[i] != '\0'; i++){
        quantidade++;
    }
     
    printf("sua palavra possui %d caracteres \n", quantidade);


    return 0;
}
#include <stdio.h>
#define TAM 20

int main(){

    char palavra[TAM];
    char caractere;
    int encontrou = 0;

    printf("Digite uma palavra de no máximo 20 letras:");
    scanf("%s", palavra);

    printf("Digite o caractere que deseja procurar:");
    scanf(" %c", &caractere);


    for (int i=0; i < TAM; i++){
        if (palavra[i] == caractere){
            encontrou = 1;
        }

    }

        if (encontrou == 1){
            printf("O caractere esta na palavra! Caractere: %c Palavra: %s\n", caractere, palavra);
        }
        else {
            printf("O caractere nao esta na palavra! Caractere: %c Palavra: %s\n", caractere, palavra);
        }
        


    return 0;
}
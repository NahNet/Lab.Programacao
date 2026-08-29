#include <stdio.h>

int main(){

    float comprimeto;
    float altura;
    float largura;

    puts("Escreva o comprimento:");
    scanf("%f", &comprimeto);

    puts("Escreva a altura:");
    scanf("%f", &altura);

    puts("Escreva a largura:");
    scanf("%f", &largura);

    float volume = comprimeto * largura * altura;
        
    printf("Volume: %.2f\n", volume);

    return 0;

}
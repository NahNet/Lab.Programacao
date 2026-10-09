#include <stdio.h>
#define TAM 15

int main(){

    float v[TAM], menor, maior;

    puts("Entre com 15 valores");

    for (int i=0; i < TAM; i++){
    scanf("%f", &v[i]);
    }

    menor = v[0];
    maior = v[0];

    for (int i=0; i < TAM; i++){
       if (v[i] < menor){
        menor = v[i];
       }

       if( v[i] > maior){
        maior = v[i];
       }

    }

    printf("Menor: %.2f\n", menor);
    printf("Maior: %.2f\n", maior);
    printf("Soma: %.2f\n", maior + menor);

    return 0;
}
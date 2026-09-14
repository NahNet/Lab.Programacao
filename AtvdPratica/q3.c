#include <stdio.h>

int main(){
   
    unsigned char n, x ,media, numero, menor, maior;

    printf("quantos n?");
    scanf("%hhd", &n);

    for (int i = 0; i < n; i++){
        printf("Digite o numero:");
        scanf("%hhd", &numero);

        if( i == 0){
        maior = numero;
        menor = numero;
        } else if 
        (numero > maior){ 
         maior = numero;
        } else if
        (numero < menor)
         menor = numero;
    }

        printf("Digite um x entre: %d e %d\n", menor, maior);
        scanf("%hhd", &x);

        media = (x - menor) / (maior - menor);

        printf("Maior: %hhd\n", maior);
        printf("menor: %hhd\n", menor);
        printf("Media: %d\n", media);


    return 0;
}
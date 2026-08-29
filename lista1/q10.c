#include <stdio.h>

int main(){

    float real;
    float dolar;


    printf("Digite a cotação do dólar:");
    scanf("%f", &dolar);

    printf("Digite a quantidade de reais que deseja converter:");
    scanf("%f", &real);
    
    float valor = real / dolar;


    printf("Conversão real para dólar: %.2f" , valor);


    return 0;
}


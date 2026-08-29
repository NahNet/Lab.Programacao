#include <stdio.h>

int main(){

    int hora;
    int minuto;
    int segundo;


    printf("Digite quantas horas:");
    scanf("%d", &hora);
    
    printf("Digite quantos minutos:");
    scanf("%d", &minuto);

    printf("Digite quantos segundos:");
    scanf("%d", &segundo); 

    float segtotais = (hora * 3600) + (minuto * 60) + segundo;
    
    printf("Segundos totais: %f\n", segtotais);

    return 0;

}
#include <stdio.h>


int main(){

    float num;
    int truncado;

    puts("Entre com um número real: ");
    scanf("%f", &num);

    truncado = (int)(num * 10);
    printf("%.1f\n", truncado / 10.0);

    return 0;

}
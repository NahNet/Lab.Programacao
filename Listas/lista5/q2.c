#include <stdio.h>

int main(){

    int y, x, temp, *yPtr, *xPtr;


    printf("Digite um valor inteiro para x:");
    scanf("%d", &x);

    printf("Digite um valor inteiro para y:");
    scanf("%d", &y);

    xPtr = &x;
    yPtr = &y;

    temp = *xPtr;
    *xPtr = *yPtr;
    *yPtr = temp;

    printf("valor novo x: %d\n", x);
    printf("valor novo y: %d\n", y);
   



    return 0;
}
#include <stdio.h> 
#include <stdlib.h>
#include <math.h>


int main(){
    
    int A, B, vA, vB;
    float aA, aB, pA, pB, da, dp, dv, dmaior;

        puts("Escreva a area o perimetro e quant de vertices de objeto A:");
        scanf("%f%f%d", &aA, &pA, &vA);

        puts("Escreva a area o perimetro e quant de vertices de objeto B:");
        scanf("%f%f%d", &aB, &pB, &vB);

        da = fabs(aB - aA);
        dp = fabs(pB - pA);
        dv = abs(vB - vA);


        if(da > dp){
            dmaior = da;
        } else if (dp > da){
            dmaior = dp;
        } else {
            dmaior = dv;
        }
        
        printf("A distancia de Chesbyshev: %.1f\n", dmaior);

        return 0;

}
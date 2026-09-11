#include <stdio.h> 
#include <stdlib.h>
#include <math.h>


int main(){
    
    float da1, dp1, dv1, dmaior1, dmaior2, da2, dp2, dv2, a1, p1, v1, a2, p2, v2, ax, px, vx;

        puts("Entre com a area o perimetro e quant de vertices do Centroide 1:");
        scanf("%f%f%f", &a1, &p1, &v1);

        puts("Entre com a area o perimetro e quant de vertices do Centroide 2:");
        scanf("%f%f%f", &a2, &p2, &v2);

        puts("Entre com a area o perimetro e quant de vertices do Objeto:");
        scanf("%f%f%f", &ax, &px, &vx);
        
        da1 = fabs(a1 - ax);
        da2 = fabs(a2 - ax);
        dp1 = fabs(p1 - px);
        dp2 = fabs(p2 - px);
        dv1 = fabs(v1 - vx);
        dv2 = fabs(v2 - vx);


        if(da1 > dp1){
            dmaior1 = da1;
        } else if (dp1 > da1){
            dmaior1 = dp1;
        } else {
            dmaior1 = dv1;
        }
        
         if(da2 > dp2){
            dmaior2 = da2;
        } else if (dp2 > da2){
            dmaior2 = dp2;
        } else {
            dmaior2 = dv2;
        }

        if(dmaior1 < dmaior2){
            puts("Classe C1");
        } else if (dmaior2 < dmaior1){
            puts("Classe C2");
        } else {
            puts("Empate");
        }
            
        return 0;

}
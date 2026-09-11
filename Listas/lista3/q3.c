#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    float da1, dp1, dv1, dmaior1, dmaior2;
    float da2, dp2, dv2;
    float a1, p1, v1, a2, p2, v2;
    float ax, px, vx;
    float somaM1, somaM2;
    float somaE1, somaE2;
    float accC, accM, accE;

    int n, gt;
    int classeC, classeM, classeE;
    int acertosC = 0, acertosM = 0, acertosE = 0;

    puts("Entre com a area, o perimetro e quant de vertices do Centroide 1:");
    scanf("%f%f%f", &a1, &p1, &v1);

    puts("Entre com a area, o perimetro e quant de vertices do Centroide 2:");
    scanf("%f%f%f", &a2, &p2, &v2);

    printf("Quantos objetos deseja comparar? ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++){

        printf("\nObjeto %d\n", i + 1);

        puts("Entre com a area, o perimetro e quant de vertices do Objeto:");
        scanf("%f%f%f", &ax, &px, &vx);

        printf("Qual a classe verdadeira do objeto? (1 ou 2): ");
        scanf("%d", &gt);



        da1 = fabs(a1 - ax);
        dp1 = fabs(p1 - px);
        dv1 = fabs(v1 - vx);

        dmaior1 = da1;

        if(dp1 > dmaior1)
            dmaior1 = dp1;

        if(dv1 > dmaior1)
            dmaior1 = dv1;


        da2 = fabs(a2 - ax);
        dp2 = fabs(p2 - px);
        dv2 = fabs(v2 - vx);

        dmaior2 = da2;

        if(dp2 > dmaior2)
            dmaior2 = dp2;

        if(dv2 > dmaior2)
            dmaior2 = dv2;


        if(dmaior1 < dmaior2){
            classeC = 1;
            printf("Chebyshev: C1 (%.1f)\n", dmaior1);
        }
        else if(dmaior2 < dmaior1){
            classeC = 2;
            printf("Chebyshev: C2 (%.1f)\n", dmaior2);
        }
        else{
            classeC = 0;
            puts("Chebyshev: Empate");
        }

        if(classeC == gt)
            acertosC++;

        
        da1 = fabs(a1 - ax);
        dp1 = fabs(p1 - px);
        dv1 = fabs(v1 - vx);

        somaM1 = da1 + dp1 + dv1;


        da2 = fabs(a2 - ax);
        dp2 = fabs(p2 - px);
        dv2 = fabs(v2 - vx);

        somaM2 = da2 + dp2 + dv2;


        if(somaM1 < somaM2){
            classeM = 1;
            printf("Manhattan: C1 (%.1f)\n", somaM1);
        }
        else if(somaM2 < somaM1){
            classeM = 2;
            printf("Manhattan: C2 (%.1f)\n", somaM2);
        }
        else{
            classeM = 0;
            puts("Manhattan: Empate");
        }

        if(classeM == gt)
            acertosM++;

        
        da1 = (a1 - ax) * (a1 - ax);
        dp1 = (p1 - px) * (p1 - px);
        dv1 = (v1 - vx) * (v1 - vx);

        somaE1 = da1 + dp1 + dv1;
        somaE1 = sqrt(somaE1);


        da2 = (a2 - ax) * (a2 - ax);
        dp2 = (p2 - px) * (p2 - px);
        dv2 = (v2 - vx) * (v2 - vx);

        somaE2 = da2 + dp2 + dv2;
        somaE2 = sqrt(somaE2);


        if(somaE1 < somaE2){
            classeE = 1;
            printf("Euclidiana: C1 (%.1f)\n", somaE1);
        }
        else if(somaE2 < somaE1){
            classeE = 2;
            printf("Euclidiana: C2 (%.1f)\n", somaE2);
        }
        else{
            classeE = 0;
            puts("Euclidiana: Empate");
        }

        if(classeE == gt)
            acertosE++;
    }

    
    accC = (float)acertosC / n * 100;
    accM = (float)acertosM / n * 100;
    accE = (float)acertosE / n * 100;

    printf("\n===== RESULTADO FINAL =====\n");

    printf("Chebyshev: %.1f%% (%d acertos)\n", accC, acertosC);
    printf("Manhattan: %.1f%% (%d acertos)\n", accM, acertosM);
    printf("Euclidiana: %.1f%% (%d acertos)\n", accE, acertosE);

    
    
    if(accC > accM && accC > accE){
        puts("Melhor metodo: Chebyshev");
    }
    else if(accM > accC && accM > accE){
        puts("Melhor metodo: Manhattan");
    }
    else if(accE > accC && accE > accM){
        puts("Melhor metodo: Euclidiana");
    }
    else{
        puts("Houve empate entre os melhores metodos.");
    }

    return 0;
}
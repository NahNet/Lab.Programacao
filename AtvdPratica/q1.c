#include <stdio.h>

int main(){
    unsigned char R, G, B;
    int M;

    printf("Digite r, g e b:");
    scanf("%hhu %hhu %hhu", &R, &G, &B);

    printf("Digite uma mensagem de 3 bits:");
    scanf("%d", &M);

    R = (R & ~1) | ((M >> 2) & 1);
    G = (G & ~1) | ((M >> 2) & 1);
    B = (B & ~1) | (M & 1);

    printf("Nova cor: R=%hhu G=%hhu B=%hhu", R, G, B);


    return 0;
}
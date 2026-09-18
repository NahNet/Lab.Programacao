#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    unsigned char armario=0;
    int opcao, aleatorio, num;

    srand(time(NULL));

    do{
    puts("Digite sua opção: ");
    puts("1-Ocupar um armário");
    puts("2-Liberar um armário");
    puts("3-Sair");
    scanf("%d", &opcao);

        switch(opcao){

            case 1:

                if (armario==255){
                    puts("Todos os armários estão sendo usados\n");
                }else{
                    do{
                        aleatorio=rand() % 8;
                    } while(armario & (1 << aleatorio));
                    armario |= (1 << aleatorio);
                    printf("Armário %d ocupado com sucesso!\n", aleatorio);
                }
                break;

            case 2: 

                puts("Digite o número do armário que deseja liberar (0 a 7): \n");

                scanf("%d", &num);
                if (num<0 || num>7){  
                    puts("Número inválido, digite um número entre 0 e 7\n");
                }else if (!(armario & (1 << num))){
                    puts("Armário liberado\n");
                }else{ 
                    armario &= ~(1 << num);
                    printf("Armário %d liberado com sucesso!\n", num);
                }   
                break;

            case 3:

                puts("Saindo...\n");
                break;

            default:
                puts("Opção inválida!\n");
                break;

        }
    }while(opcao!=3);

return 0;
}
#include <stdio.h>

int main()
{
    int num;
    
    printf("Entre com um número inteiro: ");
    scanf("%d", &num);

	int resto = num % 2;

	switch(resto){

	case 0:
	printf("Seu numero é par!");
	break;

	case 1:
	printf("Seu numero é ímpar!");	
	break;
	}

	return 0;
}
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#define TAM 20

int main(){

    char st1[TAM], st2[TAM];
    char caractere;
    int quantidade = 0;
    bool flag;
    unsigned int i = 0;

    printf("Digite uma palavra de no máximo 20 letras:");
    scanf("%s", st1);

    printf("Digite uma palavra de no máximo 20 letras:");
    scanf("%s", st2);

    if (strcmp(st1, st2) == 0){
        puts("Strings Iguais");
    } else {
        puts ("Strings Diferentes");
    }


// sem strcmp()

puts("\n SEM STRCMP() :");

while ((st1[i] != '\0') || (st2[i] != '\0')){
    if (st1[i] != st2[i]){
        flag = 0;
        break;
    } else {
        flag = 1;
        i++;
        continue;
    }

}

if (flag == 1 ){
    puts("Strings Iguais");
} else {
    puts ("Strings Diferentes");
}

    return 0;
}
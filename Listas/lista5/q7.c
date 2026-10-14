#include <stdio.h>

int main(void) {
    char str1[200];
    char str2[100];

    char *Ptr1 = str1;
    char *Ptr2 = str2;

    printf("Digite a primeira string: ");
    scanf("%99s", str1);

    printf("Digite a segunda string: ");
    scanf("%99s", str2);


    while (*Ptr1 != '\0') {
        Ptr1++;
    }

    while (*Ptr2 != '\0') {
        *Ptr1 = *Ptr2;
        Ptr1++;
        Ptr2++;
    }

    *Ptr1 = '\0';

    printf("String concatenada: %s\n", str1);

    return 0;
}
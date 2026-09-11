#include <stdio.h>

int main() {

    float hora_aula, horas, inss;
    float salario_bruto, desconto, salario_liquido;

    puts("Digite o valor da hora aula: R$ ");
    scanf("%f", &hora_aula);

    puts("Digite o numero de horas trabalhadas no mes: ");
    scanf("%f", &horas);

    puts("Digite o percentual de desconto do INSS: ");
    scanf("%f", &inss);

    salario_bruto = hora_aula * horas;

    desconto = salario_bruto * (inss / 100);

    salario_liquido = salario_bruto - desconto;

    printf("Salario bruto: R$ %.2f\n", salario_bruto);
    printf("Salario liquido: R$ %.2f\n", salario_liquido);

    return 0;
}
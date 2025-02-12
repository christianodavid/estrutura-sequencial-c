// Faça um programa que receba o salário de um funcionário e o percentual de aumento, calcule e mostre o valor do aumento e o novo salário.

#include <stdio.h>

int main() {

    double salario, percentual_de_aumento, valor_do_aumento, novo_salario;

    printf("Digite o salario atual:\n");
    scanf("%lf", &salario);

    printf("Digite o percentual de aumento:\n");
    scanf("%lf", &percentual_de_aumento);

    novo_salario = salario * (1 + (percentual_de_aumento / 100));
    valor_do_aumento = novo_salario - salario;

    printf("O novo salario do funcionario e R$%.2lf. O aumento foi de R$%.2lf.", novo_salario, valor_do_aumento);

    return 0;

}
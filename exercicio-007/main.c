// Faça um programa que receba o salário-base de um funcionário, calcule e mostre o seu salário a receber, sabendo que esse funcionário teve gratificação de R$ 600,00 e paga imposto de 10% sobre o salário base.

#include <stdio.h>

int main() {

    double salario_base, salario_a_receber;

    printf("Digite o salario:\n");
    scanf("%lf", &salario_base);

    salario_a_receber = (salario_base + 600) - (salario_base * 0.10);

    printf("O salario do funcionario e R$%.2lf.", salario_a_receber);

    return 0;

}
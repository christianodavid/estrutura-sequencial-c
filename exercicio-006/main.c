// Faça um programa que receba o salário-base de um funcionário, calcule e mostre o salário a receber, sabendo que esse funcionário tem gratificação de 5% sobre o salário-base e paga imposto de 7% sobre o salário-base.

#include <stdio.h>

int main() {

    double salario_base, salario_a_receber;

    printf("Digite o salario base:\n");
    scanf("%lf", &salario_base);

    salario_a_receber = salario_base + (salario_base * 0.05) - (salario_base * 0.07);

    printf("O funcionario recebera R$%.2lf.", salario_a_receber);

    return 0;

}
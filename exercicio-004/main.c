// Faça um programa que receba o salário de um funcionário, calcule e mostre o novo salário, sabendo que este sofreu um aumento de 25%.

#include <stdio.h>

int main() {

    double salario, novo_salario;

    printf("Digite o salario atual:\n");
    scanf("%lf", &salario);

    novo_salario = salario * 1.25;

    printf("O novo salario do funcionario e R$%.2lf.", novo_salario);

    return 0;

}
//  Faça um programa que receba o valor de um depósito e o valor da taxa de juros, calcule e mostre o valor do rendimento e o valor total depois do rendimento.

#include <stdio.h>

int main() {

    double deposito, juros, rendimento, valor_final;

    printf("Digite o valor do deposito:\n");
    scanf("%lf", &deposito);

    printf("Digite o valor da taxa de juros:\n");
    scanf("%lf", &juros);

    rendimento = deposito * (juros / 100);
    valor_final = deposito + rendimento;

    printf("O valor final foi de R$%.2lf , tendo um rendimento de R$%.2lf.", valor_final, rendimento);

    return 0;

}
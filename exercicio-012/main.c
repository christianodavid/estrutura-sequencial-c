// Desenvolva um algoritmo que emule um caixa eletrônico. O usuário deve inserir o valor total a ser sacado da máquina e o algoritmo deve informar quantas notas de 100, 50, 20, 10, 5 ou 2 reais serão entregues. Deve-se escolher as notas para que o usuário receba o menor número de notas possível.

#include <stdio.h>

int main() {

    int cem, cinquenta, vinte, dez, cinco, dois, saque;

    printf("Digite o valor a ser sacado:\n");
    scanf("%d", &saque);

    cem = saque / 100;
    saque %= 100;

    cinquenta = saque / 50;
    saque %= 50;

    vinte = saque / 20;
    saque %= 20;

    dez = saque / 10;
    saque %= 10;

    cinco = saque / 5;
    saque %= 5;

    dois = saque / 2;

    printf("Numero de notas de R$100,00: %d.\n", cem);
    printf("Numero de notas de R$50,00: %d.\n", cinquenta);
    printf("Numero de notas de R$20,00: %d.\n", vinte);
    printf("Numero de notas de R$10,00: %d.\n", dez);
    printf("Numero de notas de R$5,00: %d.\n", cinco);
    printf("Numero de notas de R$2,00: %d.\n", dois);

    return 0;

}


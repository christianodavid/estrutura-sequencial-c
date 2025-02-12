// Faça um programa que receba dois números maiores que zero, calcule e mostre um elevado ao outro.

#include <math.h>
#include <stdio.h>

int main() {

    double num1, num2, potencia;

    printf("Digite o primeiro numero: \n");
    scanf("%lf", &num1);

    printf("Digite o segundo numero: \n");
    scanf("%lf", &num2);

    potencia = pow(num1, num2);

    printf("Resultado: %.2lf.", potencia);

    return 0;

}
// Faça um programa que receba um número positivo e maior que zero, calcule e mostre: a) o número digitado ao quadrado; b) o número digitado ao cubo; c) a raiz quadrada do número digitado; d) a raiz cúbica do número digitado.

#include <stdio.h>
#include <math.h>

int main(void) {

    double num, num_ao_quadrado, num_ao_cubo, raiz_quadrada_do_num, raiz_cubica_do_num;

    printf("Digite um numero maior que 0:\n");
    scanf("%lf", &num);

    num_ao_quadrado = pow(num, 2);
    num_ao_cubo = pow(num, 3);
    raiz_quadrada_do_num = sqrt(num);
    raiz_cubica_do_num = pow(num, 1.0 / 3.0);

    printf("Quadrado: %.2lf\n", num_ao_quadrado);
    printf("Cubo: %.2lf\n", num_ao_cubo);
    printf("Raiz Quadrada: %lf\n", raiz_quadrada_do_num);
    printf("Raiz Cubica: %lf", raiz_cubica_do_num);

    return 0;
}
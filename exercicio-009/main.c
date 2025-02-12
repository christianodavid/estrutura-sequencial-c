// Faça um programa que calcule e mostre a área de um triângulo. Sabe-se que: Área = (base * altura)/2.

#include <stdio.h>

int main() {

    float base, altura, area_do_triangulo;

    printf("Digite o valor da base do triangulo:\n");
    scanf("%f", &base);

    printf("Digite o valor da altura do triangulo:\n");
    scanf("%f", &altura);

    area_do_triangulo = (base * altura) / 2;

    printf("Area do triangulo: %.2f", area_do_triangulo);

    return 0;

}
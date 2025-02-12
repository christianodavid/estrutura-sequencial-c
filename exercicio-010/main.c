// Faça um programa que calcule e mostre a área de um círculo. Sabe-se que: Área = Pi * R², onde Pi = 3,14.

#include <stdio.h>
#define PI 3.14

int main() {

    float raio, area_do_circulo;

    printf("Digite o raio do circulo (em cm):\n");
    scanf("%f", &raio);

    area_do_circulo = PI * (raio * raio);

    printf("Area do circulo: %.2fcm2", area_do_circulo);

    return 0;

}
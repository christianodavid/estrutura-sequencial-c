// Faça um programa que receba três notas e seus respectivos pesos, calcule e mostre a média ponderada dessas notas.

#include <stdio.h>

int main() {

    float grade1, weight1, grade2, weight2, grade3, weight3, mean;

    printf("Digite a primeira nota:\n");
    scanf("%f", &grade1);

    printf("Digite o peso da primeira nota:\n");
    scanf("%f", &weight1);

    printf("Digite a segunda nota:\n");
    scanf("%f", &grade2);

    printf("Digite o peso da segunda nota:\n");
    scanf("%f", &weight2);

    printf("Digite a terceira nota:\n");
    scanf("%f", &grade3);

    printf("Digite o peso da terceira nota:\n");
    scanf("%f", &weight3);

    mean = ((grade1 * weight1) + (grade2 * weight2) + (grade3 * weight3)) / (weight1 + weight2 + weight3);

    printf("Media ponderada: %.2f", mean);


    return 0;

}
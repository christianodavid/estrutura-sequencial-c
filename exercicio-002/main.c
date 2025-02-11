// Faça um programa que receba três notas, calcule e mostre a média aritmética entre elas.

#include <stdio.h>

int main() {
    float grade1, grade2, grade3, mean;

    printf("Digite a primeira nota: \n");
    scanf("%f", &grade1);

    printf("Digite a segunda nota: \n");
    scanf("%f", &grade2);

    printf("Digite a terceira nota: \n");
    scanf("%f", &grade3);

    mean = (grade1 + grade2 + grade3) / 3;

    printf("Media: %.2f", mean);

    return 0;

}
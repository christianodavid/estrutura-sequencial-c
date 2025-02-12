// Sabe-se que: 1 pé = 12 polegadas; 1 jarda = 3 pés; 1 milha = 1760 jardas. Faça um programa que receba uma medida em pés, faça as conversões a seguir e mostre os resultados: a) polegadas; b) jardas; c) milhas.

#include <stdio.h>

int main() {

    double pe, polegada, jarda, milha;

    printf("Digite uma medida (em pes): \n");
    scanf("%lf", &pe);

    polegada = pe * 12;
    jarda = pe / 3;
    milha = jarda / 1760;

    printf("Medida em Polegadas: %.2lf\n Medida em Jardas: %.2lf\n Medida em Milhas: %.6lf", polegada, jarda, milha);


    return 0;
}
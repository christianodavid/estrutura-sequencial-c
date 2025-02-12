// Jeremias possui um cronômetro que consegue marcar o tempo apenas em segundos. Sabendo disso, desenvolva um algoritmo que receba o tempo cronometrado, em segundos, e diga quantas horas, minutos e segundos se passaram a partir do tempo cronometrado.

#include <stdio.h>

int main(void) {

    int segundo, minuto, hora;

    printf("Digite o tempo em segundos: \n");
    scanf("%d", &segundo);

    hora = segundo / 3600;
    segundo %= 3600;
    minuto = segundo / 60;
    segundo %= 60;

    printf("Horas: %dh%dmin%dseg", hora, minuto,segundo);

    return 0;

}
#include <stdio.h>

int main() {

    int ano_nascimento, ano_atual, idade, idade_em_2030;

    printf("Digite o ano de nascimento: \n");
    scanf("%d", &ano_nascimento);

    printf("Digite o ano atual: \n");
    scanf("%d", &ano_atual);

    idade = ano_atual - ano_nascimento;
    idade_em_2030 = 2030 - ano_nascimento;

    printf("Idade em %d: %d \n", ano_atual, idade);
    printf("Idade em 2030: %d", idade_em_2030);

    return 0;
}
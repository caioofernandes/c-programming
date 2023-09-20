#include <stdio.h>

int main() {

    char nome[100];
    int idade;

    printf("Digite o seu nome: ");
    scanf("%s", &nome);

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    printf("Oi %s! Você tem %d anos!", nome, idade);

    return 0;
}
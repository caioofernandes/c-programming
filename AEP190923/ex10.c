#include <stdio.h> 

int main() {

    // Entrada: float as 3 notas e seus respectivos pesos
    // Saída: float média ponderada do aluno

    float nota1, nota2, nota3, media;
    int peso1, peso2, peso3;

    printf("Digite a primeira nota do aluno: ");
    scanf("%f", &nota1);

    printf("Digite ao peso da primeira nota: ");
    scanf("%d", &peso1);

    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);

    printf("Digite o peso da segunda nota: ");
    scanf("%d", &peso2);

    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);

    printf("Digite o peso da terceira nota: ");
    scanf("%d", &peso3);

    media = (nota1 * peso1 + nota2 * peso2 + nota3 * peso3) / 3;

    printf("Média ponderada do aluno: %.2f!", media);
    
    return 0;
}
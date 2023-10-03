#include <stdio.h> 

int main() {

    // Entrada: int número entre 100 e 999
    // Saída: int soma dos três algarismos

    int numero, algarismo1, algarismo2, algarismo3, soma;

    printf("Digite um número inteiro entre 100 e 999: ");
    scanf("%d", &numero);

    if (numero < 100 || numero > 999) {
        printf("O número deve estar entre 100 e 999.\n");
        return 0;
    }

    algarismo1 = numero / 100;
    algarismo2 = (numero / 10) % 10;
    algarismo3 = numero % 10;

    soma = algarismo1 + algarismo2 + algarismo3;

    printf("A soma dos dígitos é: %d", soma);
    
    return 0;
}
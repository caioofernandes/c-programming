#include <stdio.h> 

int main() {

    // Entrada: int número de 4 dígitos
    // Saída: int a primeira parte do número, a segunda parte do númeoro e o resultado da multiplicação soma desses dois números

    int numero, parte1, parte2, soma, resultado;

    printf("Digite um número inteiro de 4 dígitos: ");
    scanf("%d", &numero);

    if (numero < 1000 || numero > 9999) {
        printf("O número deve ter 4 dígitos.\n");
        return 1;
    }

    parte1 = numero / 100;
    parte2 = numero % 100;

    soma = parte1 + parte2;
    resultado = soma * soma;

    printf("Primeira parte: %02d\n", parte1);
    printf("Segunda parte: %02d\n", parte2);
    printf("Resultado da multiplicação: %d", resultado);
    
    return 0;
}
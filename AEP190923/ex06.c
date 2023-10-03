#include <stdio.h> 

int main() {

    // Entrada: float temperatura em graus Celsius
    // Saída: float temperatura convertida em Fahrenheit

    float celsius, fahrenheit;

    printf("Digite a teperatura em graus Celsius: ");
    scanf("%f", &celsius);
    
    fahrenheit = 32 + (celsius * 9 / 5);

    printf("A temperatura convertida em graus Fahrenheit é: %.2f", fahrenheit);

    return 0;
}
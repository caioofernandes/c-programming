#include <stdio.h> 

int main() {

    // Entrada: int número de quatro dígitos
    // Saída: int o número digitado só que invertido

    int a, b;
    
    printf("Digite um número inteiro de 4 dígitos: ");
    scanf("%d", &a);

    if (a < 1000 || a > 9999) {
        printf("O número deve ter 4 dígitos.\n");
        return 1;
    }

    b = ((a % 10) * 1000) + (((a / 10) % 10) * 100) + (((a / 100) % 10) * 10) + (a / 1000);

    printf("Número invertido: %d", b);
    
    return 0;
}
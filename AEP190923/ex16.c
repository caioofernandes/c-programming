#include <stdio.h>

int main() {

    // Entrada: float x
    // Saída: int x (arredondado)

    float x;
    
    printf("Digite um número real: ");
    scanf("%f", &x);
    
    int arredondado;
    
    if (x >= 0) {
        arredondado = (int)(x + 0.5f);
    } else {
        arredondado = (int)(x - 0.5f);
    }
    
    printf("Valor arredondado: %d\n", arredondado);
    
    return 0;
}



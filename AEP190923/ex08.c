#include <stdio.h> 

int main() {

    // Entrada: int km que serão convertidos
    // Saída: milhas que foram convertidas

    int km;
    float milhas;

    printf("Digite a quantidade de km que serão convertidos: ");
    scanf("%d", &km);
    
    milhas = km * 0.621371;

    printf("A quantidade de milhas é: %.2f", milhas);

    return 0;
}
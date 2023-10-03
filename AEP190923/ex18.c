#include <stdio.h> 

int main() {

    // Entrada: int um número com 8 dígitos
    // Saída: o número separado da maneira correta, formando uma data

    int numero;
    
    printf("Digite um número com 8 dígitos: ");
    scanf("%d", &numero);

    int dia = numero / 1000000;
    int mes = (numero / 10000) % 100;
    int ano = numero % 10000;

    printf("%.2d/%.2d/%.4d", dia, mes, ano);
    
    return 0;
}
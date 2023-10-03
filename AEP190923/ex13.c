#include <stdio.h> 

int main() {

    // Entrada: int primeiro termo (a1), a quantidade de termos (n) e a razão (r)
    // Saída: int valor do n-ésimo termo (an)

    int a1, r, n, an;

    printf("Digite o valor do primeiro termo da PA: ");
    scanf("%d", &a1);
    
    printf("Digite o valor da quantidade de termos da PA: ");
    scanf("%d", &n);
    
    printf("Digite o valor da razão da PA: ");
    scanf("%d", &r);
    
    an = a1 + (n-1) * r;

    printf("Valor do n-ésimo termo: %d", an);

    return 0;
}
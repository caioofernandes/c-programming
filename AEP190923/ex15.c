#include <stdio.h> 

int main() {

    // Entrada: int 'a', 'b' e 'c'
    // Saída: int 'a', 'b' e 'c', mas com valores diferentes dos iniciais

    int a, b, c, aux, aux2, aux3;

    printf("Digite um valor inteiro para 'a': ");
    scanf("%d", &a);

    printf("Digite um valor inteiro para 'b': ");
    scanf("%d", &b);

    printf("Digite um valor inteiro para 'c': ");
    scanf("%d", &c);

    aux = a;
    aux2 = b;
    b = aux;
    aux3 = c;
    c = aux2;
    a = aux3;
    
    printf("Valor final de 'a': %d\n", a);
    printf("Valor final de 'b': %d\n", b);
    printf("Valor final de 'c': %d", c);
    
    return 0;
}
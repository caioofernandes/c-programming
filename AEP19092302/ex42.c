#include <stdio.h>

int main() {

    int a, b;

    printf("Digite um valor para 'a': ");
    scanf("%d", &a);

    printf("Digite um valor diferente para 'b': ");
    scanf("%d", &b);

    if(a > b)
    {
        printf("Menor valor: %d\n", b);
        printf("Maior valor: %d", a);
    }
    else
    {
        printf("Menor valor: %d\n", a);
        printf("Maior valor: %d", b);
    }

    return 0;
}
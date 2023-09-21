#include <stdio.h>

int main() {

    int a, b;

    printf("Digite um valor para 'a': ");
    scanf("%d", &a);

    printf("Digite um valor diferente para 'b': ");
    scanf("%d", &b);

    if(a > b)
        printf("'a' é maior que b!");
    else  
        printf("'a' é menor ou igual a b!");  

    return 0;
}
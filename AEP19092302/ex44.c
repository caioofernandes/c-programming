#include <stdio.h>

int main() {

    int n;
    
    printf("Digite um numero inteiro qualquer: ");
    scanf("%d", &n);

    if(n % 2 == 0)
        printf("Esse número é par");
    else
        printf("Esse número é impar");

    return 0;
}
#include <stdio.h>

int main() {

    float x, y, divisao;

    printf("Digite um valor para 'x': ");
    scanf("%f", &x);

    printf("Digite um valor para 'y': ");
    scanf("%f", &y);

    if(y == 0)
        printf("Não é possível dividir por 0");
    else  
    {
        divisao = x / y;
        printf("A divisão dos dosi número inforamdos é %.2f", divisao);
    }

    return 0;
}
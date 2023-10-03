#include <stdio.h> 

int main() {

    // Entrada: int valor de 'a' e 'b'
    // Saída: int valor de 'x'

    float a, b, x;

    printf("Digite o valor de 'a': ");
    scanf("%f", &a);

    if(a == 0)
    {
        printf("O valor de 'a' deve ser diferente de 0.");
        return 0;
    }
        
    printf("Digite o valor de 'b': ");
    scanf("%f", &b);

    x = -b / a;

    printf("Valor de x: %.2f", x);

    return 0;
}
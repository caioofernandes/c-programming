#include <stdio.h>

int main() {

    float p1, p2, media;

    printf("Digite a primeira nota: ");
    scanf("%f", &p1);

    printf("Digite a segunda nota: ");
    scanf("%f", &p2);

    media = (p1 + p2) / 2;

    if(media >= 7)
        printf("Aprovado");

    return 0;
}
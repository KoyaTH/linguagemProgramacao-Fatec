#include <stdio.h>

int main() {
    float base, area, altura;

    printf("Digite a base do triangulo: ");
    scanf("%f%*c", &base);
    printf("Digite a altura do triangulo: ");
    scanf("%f%*c", &altura);

    area = (base * altura) / 2;
    printf("A Area do triangulo: %.2f", area);
    return 0;
}
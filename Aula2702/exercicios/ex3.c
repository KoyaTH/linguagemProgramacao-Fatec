#include <stdio.h>
#include <math.h>

int main() {
    float area, raio;
    const float PI = 3.14;
    printf("Digite o valor do raio do circulo: ");
    scanf("%f%*c", &raio);

    area = PI * pow(raio, 2);

    printf("Area do circulo: %.2f", area);
    return 0;
}
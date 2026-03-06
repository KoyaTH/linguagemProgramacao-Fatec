#include <stdio.h>

int main() {
    float salario;

    printf("Digite seu salario: ");
    scanf("%f", &salario);

    printf("Seu novo salario: R$%.2f", salario * 1.25);
    return 0;
}
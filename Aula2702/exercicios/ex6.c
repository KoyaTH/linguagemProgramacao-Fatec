#include <stdio.h>

int main() {
    float salario;

    printf("Digite seu salario: ");
    scanf("%f%*c", &salario);

    printf("Seu novo salario: R$%.2f", salario * 1.25);
    return 0;
}
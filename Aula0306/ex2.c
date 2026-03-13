#include <stdio.h>

int main() {
    float salario , imposto;

    printf("Digite o salario: ");
    scanf("%f%*c", &salario);
    
    imposto = salario * 0.1;

    printf("Seu salario: R$%.2f", salario + 50 - imposto);
    return 0;
}
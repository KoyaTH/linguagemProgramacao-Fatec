#include <stdio.h>

int main() {
    float salario, glatificacao, imposto;

    printf("Digite o salario: ");
    scanf("%f%*c", &salario);
    
    glatificacao = salario * 0.05;
    imposto = salario * 0.07;

    printf("Seu salario: R$%.2f", salario + glatificacao - imposto);
    return 0;
}
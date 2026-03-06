#include <stdio.h>

int main() {
    float salario;
    float aumento;

    printf("Digite o salario: ");
    scanf("%f", &salario);
    printf("Digite a porcentagem de aumento: ");
    scanf("%f", &aumento);

    printf("Seu novo salario: R$%.2f", salario * (1+aumento/100));

    return 0;

}
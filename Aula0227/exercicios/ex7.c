#include <stdio.h>

int main() {
    float salario;
    float aumento;

    printf("Digite o salario: ");
    scanf("%f%*c", &salario);
    printf("Digite a porcentagem de aumento: ");
    scanf("%f%*c", &aumento);

    printf("Seu novo salario: R$%.2f\n", salario * (1+aumento/100));
    printf("Aumento de R$%.2f", salario * (aumento/100));
    return 0;

}
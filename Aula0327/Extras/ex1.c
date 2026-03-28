#include <stdio.h>

int main() {
    float salario, aumento;

    printf("Informe seu salario: ");
    scanf("%f%*c", &salario);

    if (salario > 1250) {
        aumento = salario * 0.10;
        printf("Aumento de 10% \n");
    }else{
        aumento = salario * 0.15;
        printf("Aumento de 15% \n");
    }
    printf("Aumento de: R$%.2f\n", aumento);
    printf("Novo Salario: R$%.2f\n", salario + aumento);
    return 0;
}
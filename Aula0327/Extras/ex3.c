#include <stdio.h>

int main() {
    float salario;

    printf("Informe seu salario: ");
    scanf("%f%*c", &salario);

    if (salario < 1000) {
        salario = salario * 1.30;
        printf("Aumento de 30%, Salario Reajustado: R$%.2f",salario);
    }else{
        printf("Sem Reajuste no salario");
    }
    return 0;
}
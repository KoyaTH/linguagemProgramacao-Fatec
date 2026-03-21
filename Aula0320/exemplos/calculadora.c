#include <stdio.h>

int main() {
    int op;
    float num1, num2;
    char resultado[120];

    printf("Digite 2 Numeros: \n");
    scanf("%f", &num1);
    scanf("%f", &num2);

    printf("\nEscolha a Operacao: \n1 - Adicao\n2 - Subtracao\n3 - Multiplicacao\n4 - Divisao\n");
    scanf("%d", &op);

    switch (op) {
    case 1:
        snprintf(resultado, sizeof(resultado),"Resultado da Adicao: %.2f + %.2f = %.2f", num1, num2, num1 + num2);
        break;
    case 2:
        snprintf(resultado, sizeof(resultado), "Resultado da Subtracao: %.2f - %.2f = %.2f", num1, num2, num1 - num2);
        break;
    case 3:
        snprintf(resultado, sizeof(resultado), "Resultado da Multiplicacao: %.2f * %.2f = %.2f", num1, num2, num1 * num2);
        break;
    case 4:
        if (num2 != 0) {
            snprintf(resultado, sizeof(resultado), "Resultado da Divisao: %.2f / %.2f = %.2f", num1, num2, num1 / num2);
        } else {
            snprintf(resultado, sizeof(resultado), "Nao existe divisao por 0");
        }
        break;
    default:
        snprintf(resultado, sizeof(resultado), "Operacao informada invalida");
        break;
    }

    printf("%s\n", resultado);
    return 0;
}

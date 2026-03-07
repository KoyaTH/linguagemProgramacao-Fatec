#include <stdio.h>

int main() {
    float deposito, juros;

    printf("Digite o valor do deposito: ");
    scanf("%f%*c", &deposito);
    printf("Digite o valor da taxa de juros: ");
    scanf("%f%*c", &juros);

    juros = juros / 100;

    printf("Rendimento Total: R$%.2f\n", deposito * (1+juros));
    printf("Rendimento de R$%.2f", deposito * juros);
    return 0;
}
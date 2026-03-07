#include <stdio.h>

int main() {
    float custo, pconvite;

    printf("Digite o custo total do espetaculo: ");
    scanf("%f%*c", &custo);
    printf("Digite o preco do espetaculo: ");
    scanf("%f%*c", &pconvite);

    printf("Quantidade de convites necessarios para pagar o custo do espetaculo: %.0f", custo / pconvite);
    return 0;
}
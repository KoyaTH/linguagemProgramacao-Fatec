#include <stdio.h>

int main() {
    float distancia;

    printf("Informe a Distancia(km) que quer percorrer: ");
    scanf("%f%*c", &distancia);

    if (distancia > 200){
        printf("Valor da Viagem Longa R$%.2f", distancia * 0.45);
    }else {
        printf("Valor da Viagem Curta R$%.2f", distancia * 0.50);
    }
    return 0;
}
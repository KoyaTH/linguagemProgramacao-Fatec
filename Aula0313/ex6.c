#include <stdio.h>

int main() {
    float km;

    printf("Digite a Velocidade(km/h) do seu carro: ");
    scanf("%f%*c", &km);

    if (km > 80){
        printf("Multa de R$%.2f", (km - 80) * 5);
    }
    else{
        printf("Tudo Certo, Sem Multa");
    }
    
    return 0;
}
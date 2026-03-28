#include <stdio.h>

int main() {
    int idade;

    printf("Informe Sua Idade: ");
    scanf("%d%*c", &idade);

    if (idade >= 18){
        printf("Maior de Idade");
    }else{
        printf("Menor de Idade");
    }
    return 0;
}
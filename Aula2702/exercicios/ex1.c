#include <stdio.h>

int main() {
    int numero;
    printf("Digite um nuemro: ");
    scanf("%d%*c", &numero);

    printf("O Antecessor do seu numero: %d\n", numero - 1);
    printf("O Sucessor do seu numero: %d\n", numero + 1);
    return 0;
}
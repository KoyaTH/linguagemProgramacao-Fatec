#include <stdio.h>

int main() {
    int numero;
    printf("Digite um numero: ");
    scanf("%d%*c", &numero);

    printf("O Antecessor do seu numero: %d\n", numero - 1, \
        "O Sucessor do seu numero: %d\n", numero + 1);
    return 0;
}
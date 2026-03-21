#include <stdio.h>

int main() {
    int i;
    printf("Insira um numero inteiro de 1 a 5\n");
    scanf("%d%*c", &i);

    switch (i){
    case 1:
        printf("Numero 1 foi digitado");
        break;
    case 2:
        printf("Numero 2 foi digitado");
        break;
    case 3:
        printf("Numero 3 foi digitado");
        break;
    case 4:
        printf("Numero 4 foi digitado");
        break;
    case 5:
        printf("Numero 5 foi digitado");
        break;
    default:
        printf("Numero digitado fora do intervalo desejado");
        break;
    }
    return 0;
}
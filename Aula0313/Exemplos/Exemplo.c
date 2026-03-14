#include <stdio.h>
#include <math.h>
int main() {
    int quadrado, num;
    float raiz;

    printf("Digite um numero inteiro: ");
    scanf("%d*%c", &num);

    if (num % 2 == 0)
    {
        raiz = sqrt(num);
        printf("O numero e par\n");
        printf("A Raiz quadrada e: %.2f", raiz);
    }
    else
    {
        quadrado = num * num;
        printf("O numero e impar\n");
        printf("O numero ao quadrado e: %d", quadrado);
    }
    
    return 0;
}
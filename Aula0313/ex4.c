#include <stdio.h>

int main() {
    int num;

    printf("Digite um numero inteiro: ");
    scanf("%d%*c", &num);

    if (num % 3 == 0 && num % 7 == 0){
        printf("Seu numero e divisivel por 3 e 7");
    }
    else{
        printf("Seu numero nao e divisivel por 7 e 3");
    }

    return 0;
}
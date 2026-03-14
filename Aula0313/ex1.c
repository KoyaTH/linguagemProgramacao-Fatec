#include <stdio.h>

int main()
{
    int num;

    printf("Digite um numero inteiro: ");
    scanf("%d%*c", &num);

    if (num % 5 == 0){
        printf("Seu numero e divisivel por 5");
    }else{
        printf("Seu numero nao divisivel por 5");
    }

    return 0;
}
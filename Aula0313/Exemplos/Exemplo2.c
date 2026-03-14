#include <stdio.h>

int main() {
    float num1, num2;

    printf("Digite o primeiro numero: ");
    scanf("%f%*c", &num1);
    printf("Digite o segundo numero: ");
    scanf("%f%*c", &num2);

    if (num1 > num2){
        printf("\nO maior numero: %.2f ",num1);
    }else if (num2 > num1){
        printf("\nO maior numero: %.2f ",num2);
    }else{
       printf("\nOs Numeros sao iguais");
    }
    
    
    
    return 0;
}
#include <stdio.h>

int main() {
    float valorCasa, salario, prestacao;
    int mesesPagar;

    printf("Informe seu Salario: ");
    scanf("%f%*c", &salario);
    printf("Informe o Preco da Casa: ");
    scanf("%f%*c", &valorCasa);
    printf("Dividir em quantas Parcelas?: ");
    scanf("%d%*c", &mesesPagar);
    
    prestacao = valorCasa / mesesPagar;
    if (salario > (prestacao * 1.3)){
        printf("Valor da Casa: R$%.2f\n", valorCasa);
        printf("Valor da Prestacao: R$%.2f\n", prestacao);
        printf("Meses a Pagar: %d\n", mesesPagar);
    }else{
        printf("O Seu salario(R$%.2f) e menor que 30 por cento da Prestacao: R$%.2f",salario, prestacao * 1.3);
    }
    
    return 0;
}
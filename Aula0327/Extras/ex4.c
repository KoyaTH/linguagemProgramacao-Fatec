#include <stdio.h>

int main() {
    float salario, aumento;

    printf("Informe seu salario: ");
    scanf("%f%*c", &salario);

    if (salario <= 1000){
        printf("Aumento de 35 Por Cento\n");
        aumento = salario * 0.35;
        printf("Aumento: R$%.2fzn", aumento);
        printf("Salario Reajustado: R$%.2f", salario + aumento);
    }else if(salario>1000 && salario <= 1500){
        printf("Aumento de 30 Por Cento\n");
        aumento = salario * 0.3;
        printf("Aumento: R$%.2fzn", aumento);
        printf("Salario Reajustado: R$%.2f", salario + aumento);
    }else if(salario>1500 && salario <= 2000){
        printf("Aumento de 20 Por Cento\n");
        aumento = salario * 0.2;
        printf("Aumento: R$%.2fzn", aumento);
        printf("Salario Reajustado: R$%.2f", salario + aumento);
    }else if(salario>2000 && salario <= 4000){
        printf("Aumento de 10 Por Cento\n");
        aumento = salario * 0.1;
        printf("Aumento: R$%.2fzn", aumento);
        printf("Salario Reajustado: R$%.2f", salario + aumento);
    }else{
        printf("Sem Aumento");
    }
    
    
    
    return 0;
}
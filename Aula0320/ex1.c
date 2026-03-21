#include <stdio.h>
#include <ctype.h>

int main() {
    char tipo;
    int kwh;
    float preco;

    printf("Informe o Tipo da sua Residencia\nR - Redicencial\nC - Cormecial\nI - Industrial\n");
    scanf(" %c", &tipo);
    tipo = toupper(tipo);

    printf("Informe a sua Faixa(kWh): ");
    scanf("%d%*c", &kwh);

    switch (tipo)
    {
    case 'R':
        if (kwh <= 500){
            preco = 0.40;
        }else{
            preco = 0.65;
        }
        break;
    case 'C':
        if (kwh <= 1000){
            preco = 0.55;
        }else{
            preco = 0.60;
        }
        break;
    case 'I':
        if (kwh <= 5000){
            preco = 0.55;
        }else{
            preco = 0.60;
        }
        break;
    default:
        printf("Tipo Invalido");
        return 0;
    }
    printf("Tipo: %c\nFaixa(kWh): %d\nPreco: R$%.2f", tipo, kwh, preco);
    return 0;
}
#include <stdio.h>

int main() {   
    char nome;
    int idade;
    float mensalidade;

    printf("Informe seu nome: ");
    gets(nome);
    printf("Informe sua idade: ");
    scanf("%d%*c", &idade);

    if (idade <= 18)
        mensalidade = 50;
    else if (idade >= 19 && idade <= 29)
        mensalidade = 70;
    else if (idade >= 30 && idade <= 45)
        mensalidade = 90;
    else if (idade >= 46 && idade <= 65)
        mensalidade = 130;
    else
        mensalidade = 170;

    printf("Seu Nome: %s\nSua idade: %d\nSua Mensalidade: R$%.2f", nome, idade, mensalidade);
    return 0;
}
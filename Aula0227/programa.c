# include <stdio.h>

int main(void){
    int idade, ano;
    float altura;
    char nome[30];

    printf("Digite seu nome: ");
    scanf("%s", nome);
    printf("Digite sua idade: ");
    scanf("%d", &idade);
    printf("Digite sua altura: ");
    scanf("%f", &altura);

    ano = 2026 - idade;

    printf("\nSeu nome: %s\
        \nSua idade: %d\
        \nSua altura: %.2f\
        \nSeu ano de nascimento: %d\
        ", nome, idade, altura, ano);
}
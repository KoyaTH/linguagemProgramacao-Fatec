#include <stdio.h>

int main() {
    char nome[30];
    int i;

    printf("\nInforme seu nome: ");
    scanf("%s%*c", &nome);

    i = 0;
    do 
    {
        printf("\n %d - %s",i,nome);
        i++;
    } while (i != 10);    
    
    return 0;
}
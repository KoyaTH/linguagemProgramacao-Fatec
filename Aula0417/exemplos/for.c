#include <stdio.h>

int main() {
    int i;
    char nome[30];

    printf("\nInforme o nome: ");
    scanf("%s", &nome);

    for (i = 1; i <= 10 ; i++)
        printf("\n %s", nome);
    
    
    return 0;
}
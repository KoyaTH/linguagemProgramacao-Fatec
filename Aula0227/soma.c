#include <stdio.h>

int main() {
    int n1, n2, n3, n4, soma;
    
    printf("Digite 4 numeros\n");
    scanf("%d%*c", &n1);
    scanf("%d%*c", &n2);
    scanf("%d%*c", &n3);
    scanf("%d%*c", &n4);

    soma = n1 + n2 + n3 + n4;

    printf("\nResultado da soma = %d",soma);
    getchar();
    return 0;
}
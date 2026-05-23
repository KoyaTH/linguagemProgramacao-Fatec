#include <stdio.h>

int main() {
    int vetorA[10], i;
    
    for (i = 0; i < 10; i++)
    {
        printf("\nDigite o %d elemento do vetor: ", i+1);
        scanf("%d%*c", &vetorA[i]);
    }
    printf("\nVetor Preenchido");
    for ( i = 0; i < 10; i++)
    {
        printf("\nO elemento na posicao %d e: %d", i+1, vetorA[i]);
    }
    
    
    return 0;
}
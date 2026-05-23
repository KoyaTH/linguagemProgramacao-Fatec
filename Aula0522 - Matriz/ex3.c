#include <stdio.h>

int main() {
    int matrizA[3][4], matrizB[3][4], matrizC[3][4], i, j;
    
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("Insira um numero inteiro na posicao %d %d da Matriz A: ", i, j);
            scanf("%d%*c", &matrizA[i][j]);

            printf("Insira um numero inteiro na posicao %d %d da Matriz B: ", i, j);
            scanf("%d%*c", &matrizB[i][j]);

            matrizC[i][j] = matrizA[i][j] + matrizB[i][j];
        }
    }

    printf("Soma das Matrizes: \n");
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 4; j++)
        {
            printf("| %d |", matrizC[i][j]);
        }
        printf("\n");
    }
    
    
    
    return 0;
}
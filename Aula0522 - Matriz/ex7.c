#include <stdio.h>

int main() {
    int matrizA[4][4], i = 0, j = 0, alerta = 0;

    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("Insira um numero inteiro na posicao %d %d da Matriz: ", i, j);
            scanf("%d%*c", &matrizA[i][j]);

            if (matrizA[i][j] < 0)
            {
                matrizA[i][j] = 0;
                alerta = 1;
            }
        }
    }
    if (alerta == 1)
    {
        printf("numeros negativos foram substituidos por 0\n");
    }
    
    for ( i = 0; i < 4; i++)
    {
        for ( j = 0; j < 4; j++)
        {
            printf("| %d |", matrizA[i][j]);
        }
        printf("\n");
    }
    return 0;
}
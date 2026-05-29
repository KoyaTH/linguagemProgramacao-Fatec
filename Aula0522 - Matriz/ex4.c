#include <stdio.h>

int main() {
    int m[2][2], r[2][2], i = 0, j = 0, maior = 0;

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("Insira um numero inteiro na posicao %d %d da Matriz M: ", i, j);
            scanf("%d%*c", &m[i][j]);

            if (m[i][j] > maior)
            {
                maior = m[i][j];
            }
        }
    }
    printf("Resultado da Matriz Multiplicado pelo maior Numero %d :\n", maior);
    for ( i = 0; i < 2; i++)
    {
        for ( j = 0; j < 2; j++)
        {
            printf("| %d |", r[i][j] = m[i][j] * maior);
        }
        printf("\n");
    }
    
    return 0;
}
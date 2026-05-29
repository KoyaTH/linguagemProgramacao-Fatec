#include <stdio.h>

int main() {
    int matrizA[3][5], i = 0, j = 0, quantidade = 0;

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 5; j++)
        {
            printf("Insira um numero inteiro na posicao %d %d da Matriz: ", i, j);
            scanf("%d%*c", &matrizA[i][j]);

            if (matrizA[i][j] > 15 && matrizA[i][j] < 20)
            {
                quantidade++;
            }
        }
    }
    printf("Na matriz tem %d numeros entre 15 e 20", quantidade);
    return 0;
}
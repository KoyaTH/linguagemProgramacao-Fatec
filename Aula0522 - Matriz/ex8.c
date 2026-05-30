#include <stdio.h>

int main() {
    int matrizA[5][5],matrizB[5][5], i = 0, j = 0, contador = 0;

    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("Insira um numero inteiro na posicao %d %d da Matriz A: ", i, j);
            scanf("%d%*c", &matrizA[i][j]);
            printf("Insira um numero inteiro na posicao %d %d da Matriz B: ", i, j);
            scanf("%d%*c", &matrizB[i][j]);

            if (matrizA[i][j] == matrizB[i][j])
            {
                contador++;
            }
        }
    }
    printf("Quantidade de numeros repetidos digitados: %d\n", contador);
    return 0;
}
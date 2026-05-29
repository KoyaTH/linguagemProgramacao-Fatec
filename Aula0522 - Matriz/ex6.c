#include <stdio.h>

int main() {
    int matrizA[3][4], i = 0, j = 0, par = 0, impar = 0, media = 0, total = 0;

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("Insira um numero inteiro na posicao %d %d da Matriz: ", i, j);
            scanf("%d%*c", &matrizA[i][j]);

            if (matrizA[i][j] % 2 == 0)
            {
                par++;
            }else{
                impar+= matrizA[i][j];
            }
            total++;
            media += matrizA[i][j];
        }
    }
    media = media / total;
    printf("Na matriz tem %d numeros pares \nA soma de todos os numeros impares e %d \nA media de todos os numeros e %d", par, impar, media);
    return 0;
}
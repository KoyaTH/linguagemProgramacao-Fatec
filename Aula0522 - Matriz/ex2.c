#include <stdio.h>

int main() {
    int matriz[3][3], i, j, media = 0, contador = 0, menor = 0;
    
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("Insira um numero inteiro na posicao %d %d: ", i, j);
            scanf("%d%*c", &matriz[i][j]);

            media += matriz[i][j];
            contador++;
        }
    }
    media = media / contador;
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            if (matriz[i][j] < media)
            {
                menor++;
            }
            
        }
        
    }
    
    printf("Media: %d\n Contador de Numeros menores que a media: %d", media, menor);
    
    return 0;
}
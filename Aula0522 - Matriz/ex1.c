#include <stdio.h>

int main() {
    int matriz[3][5], i, j, par = 0, impar = 0;
    
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 5; j++)
        {
            printf("Insira um numero inteiro na posicao %d %d: ", i, j);
            scanf("%d%*c", &matriz[i][j]);

            if (matriz[i][j] % 2 == 0)
            {
                par++;
            }else{
                impar++;
            }
            
        }
    }
    printf("A Matriz tem %d numeros pares e %d numeros impares", par, impar);
    
    return 0;
}
#include <stdio.h>

int main() {
    int vetor[10], par[10], impar[10], i, contPar = 0, contImpar = 0;

    for(i = 0; i < 10; i++)
    {
        printf("\nDigite o %d Numero Inteiro: ", i+1);
        scanf("%d%*c", &vetor[i]);
        if (vetor[i] % 2 == 0)
        {
            par[contPar] = vetor[i];
            contPar++;
        }else
        {
            impar[contImpar] = vetor[i];
            contImpar++;
        }        
    }
    printf("Vetor Par:\n");
    for (i = 0; i < contPar; i++)
    {
        printf("%d - ", par[i]);
    }
    printf("\nVetor Impar:\n");
    for (i = 0; i < contImpar; i++)
    {
        printf("%d - ", impar[i]);
    }
    
    return 0;
}
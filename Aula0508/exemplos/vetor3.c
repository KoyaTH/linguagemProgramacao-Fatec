#include <stdio.h>

int main() {
    int vetorA[10], i, j, troca;
    
    for (i = 0; i < 10; i++)
    {
        printf("\nDigite o %d elemento: ", i+1);
        scanf("%d%*c", &vetorA[i]);
    }
    for ( i = 0; i < 9; i++)
    {
        for ( j = i+1; j < 10; j++)
        {
            if (vetorA[i] > vetorA[j])
            {
                troca = vetorA[i];
                vetorA[i] = vetorA[j];
                vetorA[j] = troca;
            } 
        } 
    }

    printf("\nVetor Ordenado\n");
    for ( i = 0; i < 10; i++)
    {
        printf("%d - ", vetorA[i]);
    }
    
    

    return 0;
}
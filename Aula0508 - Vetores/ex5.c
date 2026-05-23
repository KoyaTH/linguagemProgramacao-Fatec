#include <stdio.h>

int main() {
    int vetorA[20], vetorB[20], vetorC[20], i,j, troca;

    for(i = 0; i < 20; i++)
    {
        printf("\nDigite o %d Numero Inteiro do Vetor A: ", i+1);
        scanf("%d%*c", &vetorA[i]);
        printf("\nDigite o %d Numero Inteiro do Vetor B: ", i+1);
        scanf("%d%*c", &vetorB[i]);
    }
    for(i = 0; i < 20; i++){
        vetorC[i] = vetorA[i] + vetorB[i];
    }
    for ( i = 0; i < 19; i++)
    {
        for ( j = i+1; j < 20; j++)
        {
            if (vetorC[i] > vetorC[j])
            {
                troca = vetorC[i];
                vetorC[i] = vetorC[j];
                vetorC[j] = troca;
            } 
        } 
    }
    printf("\nNumeros do Vetor C: ");
    for ( i = 0; i < 20; i++)
    {
        printf("%d - ", vetorC[i]);
    }
    return 0;
}
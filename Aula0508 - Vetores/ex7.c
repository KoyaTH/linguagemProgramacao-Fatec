#include <stdio.h>

int main() {
    int vetorA[5], vetorB[5], vetorC[10], i = 0, j = 0, aux;

    for(i = 0; i < 5; i++)
    {
        printf("\nDigite o %d Numero Inteiro do Vetor A: ", i+1);
        scanf("%d%*c", &vetorA[i]);
        printf("\nDigite o %d Numero Inteiro do Vetor B: ", i+1);
        scanf("%d%*c", &vetorB[i]);
    }
    for ( i = 0; i < 4; i++)
    {
        for ( j = i+1; j < 5; j++)
        {
            if (vetorA[i] > vetorA[j])
            {
                aux = vetorA[i];
                vetorA[i] = vetorA[j];
                vetorA[j] = aux;
            } 
        } 
        for ( j = i+1; j < 5; j++)
        {
            if (vetorB[i] > vetorB[j])
            {
                aux = vetorB[i];
                vetorB[i] = vetorB[j];
                vetorB[j] = aux;
            } 
        }
    }
    j = 0;
    for (i = 0; i < 5; i++)
    {
        vetorC[j] = vetorA[i];
        j++;
        vetorC[j] = vetorB[i];
        j++;
    }

    for ( i = 0; i < 9; i++)
    {
        for ( j = i+1; j < 10; j++)
        {
            if (vetorC[i] > vetorC[j])
            {
                aux = vetorC[i];
                vetorC[i] = vetorC[j];
                vetorC[j] = aux;
            } 
        } 
    }
        printf("\nNumeros do Vetor C: ");
    for ( i = 0; i < 10; i++)
    {
        printf("%d", vetorC[i]);
        if (i < 9) {
            printf(" - ");
        }
    }

    return 0;
}
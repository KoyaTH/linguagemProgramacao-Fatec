#include <stdio.h>

int main() {
    int vetorA[10], vetorB[10], vetorC[10], i = 0, j = 0, troca;

    for(i = 0; i < 5; i++)
    {
        printf("\nDigite o %d Numero Inteiro do Vetor A: ", i+1);
        scanf("%d%*c", &vetorA[i]);
        printf("\nDigite o %d Numero Inteiro do Vetor B: ", i+1);
        scanf("%d%*c", &vetorB[i]);
    }
    for(i = 0; i < 10; i++){
        if (i < 5)
        {
            vetorC[i] = vetorA[i];
        }else{
            vetorC[i] = vetorB[j];
            j++;
        }
    }
    for ( i = 0; i < 9; i++)
    {
        for ( j = i+1; j < 10; j++)
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
    for ( i = 0; i < 10; i++)
    {
        printf("%d - ", vetorC[i]);
    }
    return 0;
}
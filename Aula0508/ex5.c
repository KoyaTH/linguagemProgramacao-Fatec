#include <stdio.h>

int main() {
    int vetorA[20], vetorB[20], vetorC[20], i;

    for(i = 0; i < 20; i++)
    {
        printf("\nDigite o %d Numero Inteiro do Vetor A: ", i+1);
        scanf("%d%*c", &vetorA[i]);
    }
    for(i = 0; i < 20; i++)
    {
        printf("\nDigite o %d Numero Inteiro do Vetor B: ", i+1);
        scanf("%d%*c", &vetorB[i]);
    }
    for(i = 0; i < 20; i++){
        vetorC[i] = vetorA[i] + vetorB[i];
    }
    printf("\nNumeros do Vetor C: ");
    for ( i = 0; i < 20; i++)
    {
        printf("%d - ", vetorC[i]);
    }
    return 0;
}
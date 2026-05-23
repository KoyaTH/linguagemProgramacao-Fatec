#include <stdio.h>

int main() {
    int notas[10], i, contagem;

    for ( i = 0; i < 10; i++)
    {
        printf("\nDigite a %d Nota: ", i+1);
        scanf("%d%*c", &notas[i]);

        if (notas[i] > 7)
        {
            contagem++;
        }
    }
    printf("\nTem %d notas maiores que 7", contagem);

    return 0;
}
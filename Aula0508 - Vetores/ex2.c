#include <stdio.h>

int main()
{
    int nums[10], i;

    for (i = 0; i < 10; i++)
    {
        printf("\nDigite o %d Numero Inteiro: ", i + 1);
        scanf("%d%*c", &nums[i]);
    }

    printf("\nVetor em Ordem Contraria: ");
    for (i = 9; i >= 0; i--)
    {
        printf("%d - ", nums[i]);
    }
    return 0;
}
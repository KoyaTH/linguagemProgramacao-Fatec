#include <stdio.h>

int main()
{
    int nums[10], i, naoTem = 0;

    for (i = 0; i < 10; i++)
    {
        printf("\nDigite o %d Numero Inteiro: ", i + 1);
        scanf("%d%*c", &nums[i]);
    }
    for (i = 0; i < 10; i++)
    {
        if (nums[i] > 50)
        {
            printf("O numero %d na posicao %d e maior que 50\n", nums[i] , i);
        }else{
            naoTem++;
        }
    }
    if (naoTem == 10)
    {
        printf("Nao tem nenhum numero acima de 50 no vetor");
    }
    
    return 0;
}
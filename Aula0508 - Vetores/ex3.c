#include <stdio.h>

int main() {
    int nums[20], i;

    for(i = 0; i < 20; i++)
    {
        printf("\nDigite o %d Numero Inteiro: ", i+1);
        scanf("%d%*c", &nums[i]);
    }
    for ( i = 0; i < 20; i++)
    {
        if (nums[i] % 2 == 0)
        {
            printf("\nPosicao: %d tem numero par: %d", i+1, nums[i]);
        }
        
    }
    
    return 0;
}
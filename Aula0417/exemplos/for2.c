#include <stdio.h>

int main() {
    int num, i, fat = 1;
    printf("\nInforme o numero: ");
    scanf("%d%*c", &num);
    for (i = 1; i <= num; i++)
        fat*=i;
    
    printf("\nO fatorial e: %d", fat);
    return 0;
}
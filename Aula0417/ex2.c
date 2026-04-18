#include <stdio.h>

int main() {
    int i, num;
    printf("Informe o Numero que deseja ver a tabuada: ");
    scanf("%d%*c", &num);
    for (i = 0; i <= 10; i++)
        printf("\n%d x %d = %d", num, i, num*i);
    
    return 0;
}
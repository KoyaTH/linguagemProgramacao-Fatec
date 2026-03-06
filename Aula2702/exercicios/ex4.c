#include <stdio.h>

int main() {
    float n1, n2, n3, n4, media;
    
    printf("Digite 4 Notas\n");
    scanf("%f", &n1);
    scanf("%f", &n2);
    scanf("%f", &n3);
    scanf("%f", &n4);

    media = (n1 + n2 + n3 + n4) / 4;

    printf("\nMedia = %.2f",media);
    return 0;
}
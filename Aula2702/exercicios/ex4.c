#include <stdio.h>

int main() {
    float n1, n2, n3, n4, media;
    
    printf("Digite 4 Notas\n");
    scanf("%f%*c", &n1);
    scanf("%f%*c", &n2);
    scanf("%f%*c", &n3);
    scanf("%f%*c", &n4);

    media = (n1 + n2 + n3 + n4) / 4;

    printf("\nMedia = %.2f",media);
    return 0;
}
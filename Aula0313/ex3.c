#include <stdio.h>

int main() {
    float n1, n2, n3, media;
    
    printf("Digite 3 Notas\n");
    scanf("%f%*c", &n1);
    scanf("%f%*c", &n2);
    scanf("%f%*c", &n3);

    media = (n1 + n2 + n3) / 3;

    printf("\nMedia = %.2f",media);
    if (media >= 6){
        printf("\nAprovado");
    }else{
        printf("\nReprovado");
    }
    return 0;
}
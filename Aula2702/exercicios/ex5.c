#include <stdio.h>

int main() {
    int p1, p2, p3;
    float n1, n2, n3, media;

    printf("Digite 3 Notas\n");
    scanf("%f%*c", &n1);
    scanf("%f%*c", &n2);
    scanf("%f%*c", &n3);
    printf("\nDigite o peso de cada nota\n");
    scanf("%f%*c", &p1);
    scanf("%f%*c", &p2);
    scanf("%f%*c", &p3);

    media = (n1*p1 + n2*p2 + n3*p3) / (p1 + p2 + p3);

    printf("\nMedia Ponderada = %.2f",media);
    return 0;
}
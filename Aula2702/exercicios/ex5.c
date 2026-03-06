#include <stdio.h>

int main() {
    int p1, p2, p3;
    float n1, n2, n3, media;

    printf("Digite 3 Notas\n");
    scanf("%f", &n1);
    scanf("%f", &n2);
    scanf("%f", &n3);
    printf("\nDigite o peso de cada nota\n");
    scanf("%f", &p1);
    scanf("%f", &p2);
    scanf("%f", &p3);

    media = (n1*p1 + n2*p2 + n3*p3) / (p1 + p2 + p3);

    printf("\nMedia Ponderada = %.2f",media);
    return 0;
}
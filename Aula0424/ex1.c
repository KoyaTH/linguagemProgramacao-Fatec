#include <stdio.h>

int main() {
    int i, conjuntoNumero, impar, par;
    impar = 0;
    par = 0;
    conjuntoNumero = 0;
    i = 0;
    
    do{
        printf("\nInforme um numero(0 - para finalzar o programa): ");
        scanf("%d%*c", &conjuntoNumero);
        i++;
        if (conjuntoNumero % 2 == 0){
            printf("%d e par", conjuntoNumero);
            par++;
        }else{
            printf("%d e impar", conjuntoNumero);
            impar++;
        }
    } while (conjuntoNumero != 0);

    printf("\nPrograma Encerrado\n");
    printf("\nTotal de Par: %d\nTotal de Impar: %d\nTotal de Numeros: %d", par,impar,i);
    
    return 0;
}
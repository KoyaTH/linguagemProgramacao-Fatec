#include <stdio.h>

int main() {
    int idade;

    printf("Digite sua idade: ");
    scanf("%d%*c", &idade);

    if (idade >=18 && idade <= 65){
        printf("Eleitor Obrigatorio");
    }else if (idade >= 16 && idade < 18 || idade > 65){
        printf("Eleitor Facultativo");
    }else{
        printf("Nao Eleitor");
    }
    
    return 0;
}
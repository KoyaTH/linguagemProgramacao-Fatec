#include <stdio.h>

int main() {
    int i = 1, rep = 0, apro = 0, exam = 0;
    float n1,n2, mediaClasse = 0, media = 0;
    
    for (i = 1; i <=6; i++)
    {
        printf("\n\nInforme as 2 notas do aluno %d:\n", i);
        scanf("%f%*c", &n1);
        scanf("%f%*c", &n2);
        
        media = (n1+n2)/2;
        
        if (media >= 7)
        {
            printf("\nAluno %d Aprovado\n", i);
            apro+= 1;
        }else if (media <= 3){
            printf("\nAluno %d Reprovado\n", i);
            rep+= 1;
        }else{
            printf("\nAluno %d precisa de Exame\n", i);
            exam+= 1;
        }
        printf("Media do aluno %d: %.2f", i, media);
        mediaClasse+=media;

    }
    printf("\n\nMedia da Classe: %.2f\nQuantidade de aluno Aprovado: %d\nQuantidade de aluno Reprovado: %d\nQuantidade de aluno que precisa fazer Exame: %d\n", mediaClasse/6, apro, rep, exam);
    

    return 0;
}
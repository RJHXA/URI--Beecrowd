/* 
Autor: Rafael Alves;
Github: RJHXA;
Problem: https://www.beecrowd.com.br/judge/pt/problems/view/1040;
Language: C;
*/

#include <stdio.h>
 
int main() {
 
    double n1, n2, n3, n4, media, nota_exame, media_final;

    scanf("%lf %lf %lf %lf", &n1, &n2, &n3, &n4);

    media = (n1 * 2 + n2 * 3 + n3 * 4 + n4 * 1) / 10;

    if(media >= 7)
    {
        printf("Media: %.1f\n", media);
        printf("Aluno aprovado.\n");
    }
    else if(media >= 5 && media < 7)
    {
        printf("Media: %.1f\n", media);
        printf("Aluno em exame.\n");

        scanf("%lf", &nota_exame);
        media_final = (media + nota_exame) / 2;

        if(media_final >= 5) 
        {
            printf("Nota do exame: %.1f\n", nota_exame);
            printf("Aluno aprovado.\n");
            printf("Media final: %.1f\n", media_final);
        }
        else
        {
            printf("Nota do exame: %.1f\n", nota_exame);
            printf("Aluno reprovado.\n");
            printf("Media final: %.1f\n", media_final);
        }
    }
    else
    {
        printf("Media: %.1f\n", media);
        printf("Aluno reprovado.\n");
    }

    return 0;
}
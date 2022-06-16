/* 
Autor: Rafael Alves;
Github: RJHXA;
Problem: https://www.beecrowd.com.br/judge/pt/problems/view/1094;
Language: C99;
*/

#include <stdio.h>

int main() {

    int num, quantidade_animal;
    int total_coelhos = 0, total_ratos = 0, total_sapos = 0;
    double per_coelhos, per_ratos, per_sapos, total_cobaias = 0;
    char tipo_animal;

    scanf("%i", &num);

    for(int i = 0; i < num; i++)
    {
        scanf("%i", &quantidade_animal);

        total_cobaias = total_cobaias + quantidade_animal;

        getchar();

        scanf("%c", &tipo_animal);

        if(tipo_animal == 'C') 
        {
            total_coelhos = total_coelhos + quantidade_animal;
        }
        else if(tipo_animal == 'R')
        {
            total_ratos = total_ratos + quantidade_animal;
        }
        else if (tipo_animal == 'S')
        {
            total_sapos = total_sapos + quantidade_animal;
        }
    }

    per_coelhos = total_coelhos * 100 / total_cobaias;
    per_ratos = total_ratos * 100 / total_cobaias;
    per_sapos = total_sapos * 100 / total_cobaias;

    printf("Total: %.0f cobaias\nTotal de coelhos: %i\nTotal de ratos: %i\nTotal de sapos: %i\n", total_cobaias, total_coelhos, total_ratos, total_sapos);
    printf("Percentual de coelhos: %.2f %%\nPercentual de ratos: %.2f %%\nPercentual de sapos: %.2f %%\n", per_coelhos, per_ratos, per_sapos);

    return 0;
}
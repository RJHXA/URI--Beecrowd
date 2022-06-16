/* 
Autor: Rafael Alves;
Github: RJHXA;
Problem: https://www.beecrowd.com.br/judge/pt/problems/view/2872;
Language: C99;
*/

#include <stdio.h>

void insertion_sort(int vet[999], int v, int i)
{
    int k, j;
    for(k = 0; k < i + 1 && v > vet[k]; k++);

    for(j = i; j >= k; j--)
    {
        vet[j+1] = vet[j];
    }
    vet[k] = v;
}

int main() {

    int vetor[999], inicio, var, i = 0;
    char str_aux[8]; 
    vetor[0] = 1000;

    while(scanf("%d", &inicio) != EOF)
    {
        if(inicio != 0)
        {
            scanf("%s %d", str_aux, &var);

            insertion_sort(vetor, var, i);
            i++;
        }
        else
        {
            for(int r = 0; r < i; r++)
            {
                if(vetor[r] <= 9)
                {
                    printf("Package 00%d\n", vetor[r]);
                }
                else if(vetor[r] < 100)
                {
                    printf("Package 0%d\n", vetor[r]);
                }
                else
                {
                    printf("Package %d\n", vetor[r]);
                }
            }

            printf("\n");

            for(int r = 0; r < i; r++)
            {
                if(r == 0)
                {
                    vetor[r] = 1000;
                }
                else
                {
                    vetor[r] = 0;
                }
            }
            i = 0;
        }
    }

    return 0;
}
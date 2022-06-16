/* 
Autor: Rafael Alves;
Github: RJHXA;
Problem: https://www.beecrowd.com.br/judge/pt/problems/view/1143;
Language: C99;
*/

#include <stdio.h>

int main() {

    int num, numeros[3];

    scanf("%i", &num);

    for(int i = 1; i <= num; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            if(j == 0)
            {
                numeros[0] = i;
                printf("%i", numeros[j]);
            }
            else
            {
                numeros[j] = numeros[j-1] * numeros[0];
                printf(" %i", numeros[j]);
            }
        }

        printf("\n");
    }

    return 0;
}
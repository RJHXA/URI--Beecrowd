/* 
Autor: Rafael Alves;
Github: RJHXA;
Problem: https://www.beecrowd.com.br/judge/pt/problems/view/1116;
Language: C99;
*/

#include <stdio.h>

int main() {

    int num_repeticao, num1;
    double num2, media;

    scanf("%i", &num_repeticao);

    for(int i = 0; i < num_repeticao; i++)
    {
        scanf("%i %lf", &num1, &num2);

        if(num2 == 0)
        {
            printf("divisao impossivel\n");
        }
        else
        {
            media = num1 / num2;

            printf("%.1f\n", media);
        }

    }

    return 0;
}
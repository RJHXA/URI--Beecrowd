/* 
Autor: Rafael Alves;
Github: RJHXA;
Problem: https://www.beecrowd.com.br/judge/pt/problems/view/1142;
Language: C99;
*/

#include <stdio.h>

int main() {

    int num, acumulador = 0;

    scanf("%i", &num);

    for(int i = 0; i < num; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            acumulador++;
            printf("%i ", acumulador);
        }

        acumulador++;
        printf("PUM\n");
    }

    return 0;
}
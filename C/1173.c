/* 
Autor: Rafael Alves;
Github: RJHXA;
Problem: https://www.beecrowd.com.br/judge/pt/problems/view/1173;
Language: C99;
*/

#include <stdio.h>

int main() {

    int valor_entrada, N[10];

    scanf("%i", &valor_entrada);

    for(int i = 0; i < 10; i++)
    {
        if(i == 0)
        {
            N[0] = valor_entrada;
            printf("N[%i] = %i\n", i, N[0]);
        }
        else
        {
            N[i] = N[i-1] * 2;
            printf("N[%i] = %i\n", i, N[i]);
        }
    }

    return 0;
}
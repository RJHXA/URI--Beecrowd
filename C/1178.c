/* 
Autor: Rafael Alves;
Github: RJHXA;
Problem: https://www.beecrowd.com.br/judge/pt/problems/view/1178;
Language: C99;
*/

#include <stdio.h>
 
int main() {
 
    double N[100], num_entrada;

    scanf("%lf", &num_entrada);

    N[0] = num_entrada;

    for(int i = 1; i <= 100; i++)
    {
        if(i == 1)
        {
            N[i] = num_entrada / 2;
        }
        else
        {
            N[i] = N[i-1] / 2;
        }
    }

    for(int k = 0; k < 100; k++)
    {
        printf("N[%i] = %.4f\n", k, N[k]);
    }
 
    return 0;
}
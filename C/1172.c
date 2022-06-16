/* 
Autor: Rafael Alves;
Github: RJHXA;
Problem: https://www.beecrowd.com.br/judge/pt/problems/view/1172;
Language: C99;
*/

#include <stdio.h>
 
int main() {
 
    int valor, x[10];

    for(int i = 0; i < 10; i++)
    {
        scanf("%i", &valor);
        if(valor <= 0)
        {
            x[i] = 1;
        }
        else
        {
            x[i] = valor;
        }
    }

    for(int k = 0; k < 10; k++)
    {
        printf("X[%i] = %i\n", k , x[k]);
    }
    return 0;
}
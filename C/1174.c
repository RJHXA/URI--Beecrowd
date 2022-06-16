/* 
Autor: Rafael Alves;
Github: RJHXA;
Problem: https://www.beecrowd.com.br/judge/pt/problems/view/1174;
Language: C99;
*/

#include <stdio.h>
 
int main() {
 
    double A[100], valor;

    for(int i = 0; i < 100; i++)
    {
        scanf("%lf", &valor);

        if(valor <= 10)
        {
            A[i] = valor;
            printf("A[%i] = %.1f\n", i, A[i]);
        }
    }

    return 0;
}
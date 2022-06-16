/* 
Autor: Rafael Alves;
Github: RJHXA;
Problem: https://www.beecrowd.com.br/judge/pt/problems/view/1175;
Language: C99;
*/

#include <stdio.h>
 
int main() {
 
    int N[20];

    for(int i = 19; i >= 0; i--)
    {
        scanf("%i", &N[i]);
    }

    for(int k = 0; k < 20; k++)
    {
        printf("N[%i] = %i\n", k, N[k]);
    }
 
    return 0;
}
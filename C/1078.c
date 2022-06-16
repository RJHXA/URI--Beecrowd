/* 
Autor: Rafael Alves;
Github: RJHXA;
Problem: https://www.beecrowd.com.br/judge/pt/problems/view/1078;
Language: C99;
*/

#include <stdio.h>

int main() {

    int N;

    scanf("%i", &N);

    for(int i = 1; i <= 10; i++)
    {
        printf("%i x %i = %i\n", i, N, N*i);
    }

    return 0;
}
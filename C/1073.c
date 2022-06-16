/* 
Autor: Rafael Alves;
Github: RJHXA;
Problem: https://www.beecrowd.com.br/judge/pt/problems/view/1073;
Language: C99;
*/

#include <stdio.h>

int main() {

    int N;

    scanf("%i", &N);

    for(int i = 1; i <= N; i++)
    {
        if((N - i)%2 == 0)
        {
            printf("%i^2 = %i\n", i, i*i);
        }
    }

    return 0;
}
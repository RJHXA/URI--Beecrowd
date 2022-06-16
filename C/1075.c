/* 
Autor: Rafael Alves;
Github: RJHXA;
Problem: https://www.beecrowd.com.br/judge/pt/problems/view/1075;
Language: C99;
*/

#include <stdio.h>

int main() {

    int N;

    scanf("%i", &N);

    for(int i = 0; i < 9999; i++)
    {
        if(i%N == 2)
        {
            printf("%i\n", i);
        }
    }

    return 0;
}
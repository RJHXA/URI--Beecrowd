/* 
Autor: Rafael Alves;
Github: RJHXA;
Problem: https://www.beecrowd.com.br/judge/pt/problems/view/1072;
Language: C99;
*/

#include <stdio.h>

int main() {

    int N, X, contador_in = 0, contador_out = 0;
    
    scanf("%i", &N);

    for(int i = 0; i < N; i++)
    {
        scanf("%i", &X);

        if(X >= 10 && X <= 20)
        {
            contador_in++;
        }
        else 
        {
            contador_out++;
        }
    }

    printf("%i in\n%i out\n", contador_in, contador_out);

    return 0;
}
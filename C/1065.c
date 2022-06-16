/* 
Autor: Rafael Alves;
Github: RJHXA;
Problem: https://www.beecrowd.com.br/judge/pt/problems/view/1065;
Language: C99;
*/

#include <stdio.h>

int main() {

    int num, contador_pares = 0;

    for(int i = 0; i < 5; i++)
    {
        scanf("%i", &num);

        if(num%2 == 0)
        {
            contador_pares++;
        }
    }

    printf("%i valores pares\n", contador_pares);

    return 0;
}
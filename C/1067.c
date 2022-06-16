/* 
Autor: Rafael Alves;
Github: RJHXA;
Problem: https://www.beecrowd.com.br/judge/pt/problems/view/1067;
Language: C99;
*/

#include <stdio.h>

int main() {

    int num, num_subtracao;

    scanf("%i", &num);

    for(int i = num - 1; i >= 0; i--)
    {
        num_subtracao = num - i;
        if(num_subtracao%2 == 1)
        {
            printf("%i\n", num_subtracao);
        }
    }    

    return 0;
}
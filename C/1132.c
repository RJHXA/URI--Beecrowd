/* 
Autor: Rafael Alves;
Github: RJHXA;
Problem: https://www.beecrowd.com.br/judge/pt/problems/view/1132;
Language: C99;
*/

#include <stdio.h>

int main() {

    int num1, num2, soma = 0;

    scanf("%i %i", &num1, &num2);

    if(num2 > num1)
    {
        for(int i = num1; i <= num2; i++)
        {
            if(i%13 != 0)
            {
                soma = soma + i;
            }
        }
    }
    else if(num1 > num2)
    {
        for(int i = num2; i <= num1; i++)
        {
            if(i%13 != 0)
            {
                soma = soma + i;
            }
        }
    }
    else
    {
        soma = 0;
    }

    printf("%i\n", soma);

    return 0;
}
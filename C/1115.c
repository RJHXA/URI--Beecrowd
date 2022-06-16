/* 
Autor: Rafael Alves;
Github: RJHXA;
Problem: https://www.beecrowd.com.br/judge/pt/problems/view/1115;
Language: C;
*/

#include <stdio.h>

int main() {

    int validador = 1, num1, num2;

    while(validador != 0)
    {
        scanf("%i %i", &num1, &num2);

        if(num1 != 0 && num2 != 0)
        {
            if(num1 > 0 && num2 > 0)
            {
                printf("primeiro\n");
            }
            else if(num1 < 0 && num2 > 0)
            {
                printf("segundo\n");
            }
            else if(num1 < 0 && num2 < 0)
            {
                printf("terceiro\n");
            }
            else
            {
                printf("quarto\n");
            }
        }
        else
        {
            validador = 0;
        }
    }

    return 0;
}
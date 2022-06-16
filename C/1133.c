/* 
Autor: Rafael Alves;
Github: RJHXA;
Problem: https://www.beecrowd.com.br/judge/pt/problems/view/1133;
Language: C99;
*/

#include <stdio.h>

int main() {

    int num1, num2;

    scanf("%i %i", &num1, &num2);

    if(num1 > num2)
    {
        for (int i = num2+1; i < num1; i++)
        {
            if(i%5 == 2 || i%5 == 3)
            {
                printf("%i\n", i);
            }
        }
        
    }
    else if(num2 > num1)
    {
        for (int i = num1+1; i < num2; i++)
        {
            if(i%5 == 2 || i%5 == 3)
            {
                printf("%i\n", i);
            }
        }
    }

    return 0;
}
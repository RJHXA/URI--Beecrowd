/* 
Autor: Rafael Alves;
Github: RJHXA;
Problem: https://www.beecrowd.com.br/judge/pt/problems/view/1146;
Language: C99;
*/

#include <stdio.h>

int main() {

    int validador = 1, num;

    while(validador != 0)
    {
        scanf("%i", &num);

        if(num != 0)
        {
            for(int i = 1; i <= num; i++)
            {
                if(i == 1)
                {
                    printf("%i", i);
                }
                else
                {
                    printf(" %i", i);
                }
            }

            printf("\n");
        }
        else
        {
            validador = 0;
        }
    }

    return 0;
}
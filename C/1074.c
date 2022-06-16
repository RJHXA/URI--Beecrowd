/* 
Autor: Rafael Alves;
Github: RJHXA;
Problem: https://www.beecrowd.com.br/judge/pt/problems/view/1074;
Language: C99;
*/

#include <stdio.h>

int main() {

    int N, num;

    scanf("%i", &N);

    for(int i = 0; i < N; i++)
    {
        scanf("%i", &num);

        if(num == 0)
        {
            printf("NULL\n");
        }
        else if(num > 0)
        {
            if(num%2 == 0)
            {
                printf("EVEN POSITIVE\n");
            }
            else
            {
                printf("ODD POSITIVE\n");
            }
        }
        else
        {
            if(num%2 == 0)
            {
                printf("EVEN NEGATIVE\n");
            }
            else
            {
                printf("ODD NEGATIVE\n");
            }
        }
    }

    return 0;
}
/* 
Autor: Rafael Alves;
Github: RJHXA;
Problem: https://www.beecrowd.com.br/judge/pt/problems/view/1101;
Language: C99;
*/

#include <stdio.h>

int main() {

    int validador = 1;

    while(validador != 0)
    {
        int soma_num = 0, num1, num2;

        scanf("%i %i", &num1, &num2);

        if(num1 > 0 && num2 > 0)
        {
            if(num1 > num2)
            {
                for(int i = num2; i <= num1; i++)
                {
                    printf("%i ", i);
                    soma_num = soma_num + i;
                }

                printf("Sum=%i\n", soma_num);
            }
            else if(num2 > num1)
            {
                for(int i = num1; i <= num2; i++)
                {
                    printf("%i ", i);
                    soma_num = soma_num + i;
                }

                printf("Sum=%i\n", soma_num);
            }
            else
            {
                printf("Sum=%i\n", soma_num);
            }
        }
        else 
        {
            validador = 0;
        }
    }
    
    return 0;
}
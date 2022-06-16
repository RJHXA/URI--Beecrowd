/* 
Autor: Rafael Alves;
Github: RJHXA;
Problem: https://www.beecrowd.com.br/judge/pt/problems/view/1099;
Language: C99;
*/

#include <stdio.h>

int main() {

    int num_repeticao, num1, num2;

    scanf("%i", &num_repeticao);

    for(int i = 0; i < num_repeticao; i++)
    {
        int soma_impar = 0;
        scanf("%i %i", &num1, &num2);

        if(num1 > num2)
        {
            for(int k = num2 + 1; k < num1; k++)
            {
                if(k%2 == 1 || k%2 == -1)
                {
                    soma_impar = soma_impar + k;
                }
            }

            printf("%i\n", soma_impar);
        }
        else if(num2 > num1)
        {
            for (int k = num1+1; k < num2; k++)
            {
                if(k%2 == 1 || k%2 == -1)
                {
                    soma_impar = soma_impar + k;
                }
            }

            printf("%i\n", soma_impar);
        }
        else 
        {
            printf("%i\n", soma_impar);
        }
    }

    return 0;
}
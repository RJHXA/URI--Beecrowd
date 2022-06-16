/* 
Autor: Rafael Alves;
Github: RJHXA;
Problem: https://www.beecrowd.com.br/judge/pt/problems/view/1117;
Language: C;
*/

#include <stdio.h>

int main() {

    double validador = 1, num, soma_num = 0, media, contador = 0;

    while(validador != 0)
    {
        scanf("%lf", &num);

        if(num >= 0 && num <= 10)
        {
            soma_num = soma_num + num;
            contador++;

            if(contador == 2)
            {
                media = soma_num / 2;
                printf("media = %.2f\n", media);
                validador = 0;
            }
        }
        else
        {
            printf("nota invalida\n");
        }
    }

    return 0;
}
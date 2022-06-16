/* 
Autor: Rafael Alves;
Github: RJHXA;
Problem: https://www.beecrowd.com.br/judge/pt/problems/view/1118;
Language: C;
*/

#include <stdio.h>

int main() {

    int validador = 1, escolha, i = 0, entrada_repeticao = 0;
    double num, media, soma_num = 0;

    do
    {
        int validador_2 = 1;

        scanf("%lf", &num);

        if(num >= 0 && num <= 10)
        {
            soma_num = soma_num + num;

            i++;

            if(i == 2)
            {
                media = soma_num / 2;

                printf("media = %.2f\n", media);

                i = 0;
                entrada_repeticao = 2;
            }
        }
        else
        {
            printf("nota invalida\n");
        }

        if(entrada_repeticao == 2)
        {
            while(validador_2 != 0)
            {
                printf("novo calculo (1-sim 2-nao)\n");
                scanf("%i", &escolha);

                if(escolha == 1)
                {
                    soma_num = 0;
                    entrada_repeticao = 0;
                    validador_2 = 0;
                }
                else if(escolha == 2)
                {
                    validador_2 = 0;
                    validador = 0;
                }
            }
        }
    } while(validador != 0);
    
    return 0;
}
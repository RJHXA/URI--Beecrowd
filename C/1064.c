/* 
Autor: Rafael Alves;
Github: RJHXA;
Problem: https://www.beecrowd.com.br/judge/pt/problems/view/1064;
Language: C99;
*/

#include <stdio.h>

int main() {

    int contador_positivo = 0;
    double num, soma_num = 0, media;

    for(int i = 0; i < 6; i++)
    {
        scanf("%lf", &num);

        if(num >= 0)
        {
            soma_num = soma_num + num;
            contador_positivo++;
        }
    }

    media = soma_num/contador_positivo;

    printf("%i valores positivos\n%.1f\n", contador_positivo, media);

    return 0;
}
/* 
Autor: Rafael Alves;
Github: RJHXA;
Problem: https://www.beecrowd.com.br/judge/pt/problems/view/1080;
Language: C99;
*/

#include <stdio.h>

int main() {

    int num, maior = 0, posicao;

    for(int i = 0; i < 100; i++)
    {
        scanf("%i", &num);

        if(num > maior)
        {
            maior = num;
            posicao = i+1;
        }

    }

    printf("%i\n%i\n", maior, posicao);

    return 0;
}
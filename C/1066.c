/* 
Autor: Rafael Alves;
Github: RJHXA;
Problem: https://www.beecrowd.com.br/judge/pt/problems/view/1066;
Language: C99;
*/

#include <stdio.h>

int main() {

    int num, contador_pares = 0, contador_impares = 0, contador_postivos = 0, contador_negativos = 0;

    for(int i = 0; i < 5; i++)
    {
        scanf("%i", &num);

        if(num%2 == 0)
        {
            contador_pares++;
        }
        else
        {
            contador_impares++;
        }

        if(num > 0)
        {
            contador_postivos++;
        }
        else if(num < 0)
        {
            contador_negativos++;
        }
    }

    printf("%i valor(es) par(es)\n", contador_pares);
    printf("%i valor(es) impar(es)\n", contador_impares);
    printf("%i valor(es) positivo(s)\n", contador_postivos);
    printf("%i valor(es) negativo(s)\n", contador_negativos);

    return 0;
}
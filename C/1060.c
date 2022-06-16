/* 
Autor: Rafael Alves;
Github: RJHXA;
Problem: https://www.beecrowd.com.br/judge/pt/problems/view/1060;
Language: C99;
*/

#include <stdio.h>
 
int main() {
 
    double a, b, c, d, e, f;
    int contador = 0;

    scanf("%lf %lf %lf %lf %lf %lf", &a, &b, &c, &d, &e, &f);

    double valores[] = {a, b, c, d, e, f};

    for(int i = 0; i < 6; i++)
    {
        if(valores[i] > 0)
        {
            contador++;
        }
    }

    printf("%i valores positivos\n", contador);
 
    return 0;
}
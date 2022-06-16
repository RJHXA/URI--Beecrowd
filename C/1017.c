/* 
Autor: Rafael Alves;
Github: RJHXA;
Problem: https://www.beecrowd.com.br/judge/pt/problems/view/1017;
Language: C;
*/

#include <stdio.h>

int main()
{
    float t, vel, d;

    scanf("%f", &t);
    scanf("%f", &vel);

    d= (t * vel)/12;
    
    printf("%.3f\n", d);

    return 0;
}
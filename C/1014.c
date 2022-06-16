/* 
Autor: Rafael Alves;
Github: RJHXA;
Problem: https://www.beecrowd.com.br/judge/pt/problems/view/1014;
Language: C;
*/

#include <stdio.h>
 
int main() {
 
    int x;
    double y, calculo;

    scanf("%d", &x);
    scanf("%lf", &y);

    calculo = x/y;
    printf("%.3f km/l\n", calculo);

    return 0;
}
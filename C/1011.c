/* 
Autor: Rafael Alves;
Github: RJHXA;
Problem: https://www.beecrowd.com.br/judge/pt/problems/view/1011;
Language: C;
*/

#include <stdio.h>

int main()
{
    double r, volume;
    
    scanf("%lf",&r);
    
    volume = (r*r*r*3.14159*4)/3;
    printf("VOLUME = %.3f\n", volume);

    return 0;
}
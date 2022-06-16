/* 
Autor: Rafael Alves;
Github: RJHXA;
Problem: https://www.beecrowd.com.br/judge/pt/problems/view/1036;
Language: C;
*/

#include <stdio.h>
#include <math.h>
 
int main() {
 
    double a, b, c;
    double delta, delta_quadrada, r1, r2;

    scanf("%lf %lf %lf", &a, &b, &c);

    delta = (b*b) - 4*a*c;

    if(a > 0 && delta > 0)
    {
        delta_quadrada = sqrt(delta);
        r1 = (-b + delta_quadrada) / (2*a);
        r2 = (-b - delta_quadrada) / (2*a);

        printf("R1 = %.5f\n", r1);
        printf("R2 = %.5f\n", r2);
    }
    else
    {
        printf("Impossivel calcular\n");
    }
 
    return 0;
}
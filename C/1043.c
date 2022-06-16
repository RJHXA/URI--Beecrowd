/* 
Autor: Rafael Alves;
Github: RJHXA;
Problem: https://www.beecrowd.com.br/judge/pt/problems/view/1043;
Language: C;
*/

#include <stdio.h>
 
int main() {
 
    double a, b, c, bc_subtracao, bc_soma, perimetro, area ;

    scanf("%lf %lf %lf", &a, &b, &c);

    bc_subtracao = b - c;
    bc_soma = b + c;

    if(a > bc_subtracao && a < bc_soma)
    {
        perimetro = a + b + c;

        printf("Perimetro = %.1f\n", perimetro);
    }
    else
    {
        area = (a + b) * c/2;

        printf("Area = %.1f\n", area);
    }
 
    return 0;
}
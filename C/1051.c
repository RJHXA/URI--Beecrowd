/* 
Autor: Rafael Alves;
Github: RJHXA;
Problem: https://www.beecrowd.com.br/judge/pt/problems/view/1051;
Language: C;
*/

#include <stdio.h>
 
int main() {
 
    double salario, calculo;

    scanf("%lf", &salario);

    if(salario <= 2000)
    {
        printf("Isento\n");
    }
    else if(salario > 2000 && salario <= 3000) 
    {
        calculo = (salario - 2000) * 0.08;
        printf("R$ %.2f\n", calculo);
    }
    else if(salario > 3000 && salario <=4500)
    {
        calculo = (salario - 3000) * 0.18 + 1000 * 0.08;
        printf("R$ %.2f\n", calculo);
    }
    else
    {
        calculo = (salario - 4500) * 0.28 + 1500 * 0.18 + 1000 * 0.08;
        printf("R$ %.2f\n", calculo);
    }

    return 0;
}
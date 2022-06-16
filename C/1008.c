/* 
Autor: Rafael Alves;
Github: RJHXA;
Problem: https://www.beecrowd.com.br/judge/pt/problems/view/1008;
Language: C;
*/

#include <stdio.h>
 
int main() {
 
    int num, horas;
    double sph, salario;

    scanf("%d", &num);
    scanf("%d", &horas);
    scanf("%lf", &sph);

    salario = horas * sph;
    printf("NUMBER = %d\n", num);
    printf("SALARY = U$ %.2f\n", salario);

    return 0;
}
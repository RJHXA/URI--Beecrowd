/* 
Autor: Rafael Alves;
Github: RJHXA;
Problem: https://www.beecrowd.com.br/judge/pt/problems/view/1020;
Language: C;
*/

#include <stdio.h>
 
int main() {
 
    int total, ano, resto1, mes, resto2, dias;
    scanf("%i", &total);

    ano = total/365;
    resto1 = total % 365;
    mes = resto1/30;
    resto2 = resto1 % 30;
    dias = resto2;

    printf("%i ano(s)\n", ano);
    printf("%i mes(es)\n", mes);
    printf("%i dia(s)\n", dias);

    return 0;
}
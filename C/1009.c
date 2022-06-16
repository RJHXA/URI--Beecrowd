/* 
Autor: Rafael Alves;
Github: RJHXA;
Problem: https://www.beecrowd.com.br/judge/pt/problems/view/1009;
Language: C;
*/

#include <stdio.h>
 
int main() {
 
    char nome[9];
    double salario_fixo, vendas_mes, salario_final;
    
    scanf("%s", &nome);
    scanf("%lf", &salario_fixo);
    scanf("%lf", &vendas_mes);

    salario_final = salario_fixo + (vendas_mes*0.15);
    printf("TOTAL = R$ %.2f\n", salario_final);

    return 0;
}
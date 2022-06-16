/* 
Autor: Rafael Alves;
Github: RJHXA;
Problem: https://www.beecrowd.com.br/judge/pt/problems/view/1010;
Language: C;
*/

#include <stdio.h>
 
int main() {
 
    int cod_1, quant_1, cod_2, quant_2;
    double preco_1, preco_2, valor;

    scanf("%d", &cod_1);
    scanf("%d", &quant_1);
    scanf("%lf", &preco_1);

    scanf("%d", &cod_2);
    scanf("%d", &quant_2);
    scanf("%lf", &preco_2);

    valor = (quant_1*preco_1) + (quant_2*preco_2);
    printf("VALOR A PAGAR: R$ %.2f\n", valor);

    return 0;
}
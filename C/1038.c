/* 
Autor: Rafael Alves;
Github: RJHXA;
Problem: https://www.beecrowd.com.br/judge/pt/problems/view/1038;
Language: C;
*/

#include <stdio.h>
 
int main() {
 
    int codigo, quant;
    double calculo;

    scanf("%i %i", &codigo, &quant);

    switch (codigo)
    {
    case 1:
        calculo = quant * 4;
        printf("Total: R$ %.2f\n", calculo);
        break;
    
    case 2:
        calculo = quant * 4.5;
        printf("Total: R$ %.2f\n", calculo);
        break;

    case 3:
        calculo = quant * 5;
        printf("Total: R$ %.2f\n", calculo);
        break;

    case 4:
        calculo = quant * 2;
        printf("Total: R$ %.2f\n", calculo);
        break;

    case 5: 
        calculo = quant * 1.5;
        printf("Total: R$ %.2f\n", calculo);
        break;
    
    default:
        break;
    }

    return 0;
}
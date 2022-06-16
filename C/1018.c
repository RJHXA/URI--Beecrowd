/* 
Autor: Rafael Alves;
Github: RJHXA;
Problem: https://www.beecrowd.com.br/judge/pt/problems/view/1018;
Language: C;
*/

#include <stdio.h>
 
int main() {
 
    int valor, cem, resto1, cinquenta, resto2, vinte, resto3, dez, resto4;
    int cinco, resto5, dois, resto6, um;
    
    scanf("%d", &valor);

    cem = valor/100;
    resto1 = valor % 100;
    cinquenta = resto1/50;
    resto2 = resto1 % 50;
    vinte = resto2/20;
    resto3 = resto2 % 20;
    dez = resto3/10;
    resto4 = resto3 % 10;
    cinco = resto4/5;
    resto5 = resto4 % 5;
    dois = resto5/2;
    resto6 = resto5 % 2;
    um = resto6/1;

    printf("%d\n", valor);
    printf("%d nota(s) de R$ 100,00\n", cem);
    printf("%d nota(s) de R$ 50,00\n", cinquenta);
    printf("%d nota(s) de R$ 20,00\n", vinte);
    printf("%d nota(s) de R$ 10,00\n", dez);
    printf("%d nota(s) de R$ 5,00\n", cinco);
    printf("%d nota(s) de R$ 2,00\n", dois);
    printf("%d nota(s) de R$ 1,00\n", um);

    return 0;
}
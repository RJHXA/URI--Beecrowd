/* 
Autor: Rafael Alves;
Github: RJHXA;
Problem: https://www.beecrowd.com.br/judge/pt/problems/view/1050;
Language: C;
*/

#include <stdio.h>
 
int main() {
 
    int valor;

    scanf("%i", &valor);
    
    if(valor == 61)
    {
        printf("Brasilia\n");
    }
    else if(valor == 71)
    {
        printf("Salvador\n");
    }
    else if(valor == 11)
    {
        printf("Sao Paulo\n");
    }
    else if(valor == 21)
    {
        printf("Rio de Janeiro\n");
    }
    else if(valor == 32)
    {
        printf("Juiz de Fora\n");
    }
    else if(valor == 19)
    {
        printf("Campinas\n");
    }
    else if(valor == 27)
    {
        printf("Vitoria\n");
    }
    else if(valor == 31)
    {
        printf("Belo Horizante\n");
    }
    else
    {
        printf("DDD nao cadastrado\n");
    }
 
    return 0;
}
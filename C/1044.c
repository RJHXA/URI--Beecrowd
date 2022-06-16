/* 
Autor: Rafael Alves;
Github: RJHXA;
Problem: https://www.beecrowd.com.br/judge/pt/problems/view/1044;
Language: C;
*/

#include <stdio.h>
 
int main() {
 
    int a, b;

    scanf("%i %i", &a, &b);

    if(a%b == 0 || b%a == 0)
    {
        printf("Sao Multiplos\n");
    }
    else
    {
        printf("Nao sao Multiplos\n");
    }
 
    return 0;
}
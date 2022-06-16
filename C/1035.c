/* 
Autor: Rafael Alves;
Github: RJHXA;
Problem: https://www.beecrowd.com.br/judge/pt/problems/view/1035;
Language: C;
*/

#include <stdio.h>
 
int main() {
 
    int a, b, c, d, s_cd, s_ab;

    scanf("%i", &a);
    scanf("%i", &b);
    scanf("%i", &c);
    scanf("%i", &d);

    s_cd = c + d;
    s_ab = a + b;

    if(b > c && d > a && s_cd > s_ab && c > 0 && d > 0 && (a%2 == 0)) 
    {
        printf("Valores aceitos\n");
    }
    else 
    {
        printf("Valores nao aceitos\n");
    }
 
    return 0;
}
/* 
Autor: Rafael Alves;
Github: RJHXA;
Problem: https://www.beecrowd.com.br/judge/pt/problems/view/1013;
Language: C;
*/

#include <stdio.h>
 
int main() {
 
    int a, b, c, maiorab;

    scanf("%i", &a);
    scanf("%i", &b);
    scanf("%i", &c);

    maiorab = (a + b + abs(a - b))/2;

    if(maiorab > c) 
    {
        printf("%i eh o maior\n", maiorab);
    }
    else if(c > maiorab)
    {
        printf("%i eh o maior\n", c);
    }

    return 0;
}
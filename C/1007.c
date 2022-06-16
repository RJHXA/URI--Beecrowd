/* 
Autor: Rafael Alves;
Github: RJHXA;
Problem: https://www.beecrowd.com.br/judge/pt/problems/view/1007;
Language: C;
*/

#include <stdio.h>
 
int main() {
 
    int a, b, c, d, diferenca;
    
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    scanf("%d", &d);

    diferenca = (a*b) - (c*d);
    printf("DIFERENCA = %d\n", diferenca);

    return 0;
}
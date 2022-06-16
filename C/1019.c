/* 
Autor: Rafael Alves;
Github: RJHXA;
Problem: https://www.beecrowd.com.br/judge/pt/problems/view/1019;
Language: C;
*/

#include <stdio.h>
 
int main() {
 
    int N, h, m, s, r;
    scanf("%d", &N);

    h = N/3600;
    r = N % 3600;
    m = r/60;
    s = r % 60;
    
    printf("%d", h);
    printf(":%d", m);
    printf(":%d\n",s);

    return 0;
}
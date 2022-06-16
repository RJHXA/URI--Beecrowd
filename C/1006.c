/* 
Autor: Rafael Alves;
Github: RJHXA;
Problem: https://www.beecrowd.com.br/judge/pt/problems/view/1006;
Language: C;
*/

#include <stdio.h>
 
int main() {
 
    double a, b, c, media;
    
    scanf("%lf", &a);
    scanf("%lf", &b);
    scanf("%lf", &c);

    media = (a*2 + b*3 + c*5)/10;
    printf("MEDIA = %.1f\n", media);

    return 0;
}
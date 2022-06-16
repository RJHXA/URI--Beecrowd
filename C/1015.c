/* 
Autor: Rafael Alves;
Github: RJHXA;
Problem: https://www.beecrowd.com.br/judge/pt/problems/view/1015;
Language: C;
*/

#include <stdio.h>
#include <math.h>
 
int main() {
 
    double x1, x2, y1, y2, dx, dy, dxy, dr;
    
    scanf("%lf", &x1);
    scanf("%lf", &y1);
    scanf("%lf", &x2);
    scanf("%lf", &y2);

    dx = (x2-x1) * (x2-x1);
    dy = (y2-y1) * (y2-y1);
    dxy = (dx + dy);
    dr = sqrt(dxy);

    printf("%.4f\n", dr);

    return 0;
}
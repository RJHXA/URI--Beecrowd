/* 
Autor: Rafael Alves;
Github: RJHXA;
Problem: https://www.beecrowd.com.br/judge/pt/problems/view/1002;
Language: C;
*/

#include <stdio.h>
 
int main() {
 
    double r, area;
    
    scanf("%lf", &r);

    area= r*r*3.14159;
    printf("A=%.4f\n", area);
    
    return 0;
}
/* 
Autor: Rafael Alves
Github: RJHXA
Problem: https://www.beecrowd.com.br/judge/pt/problems/view/1113
Language: C;
*/

#include <stdio.h>

int main() {

    int x, y;

    do {
        scanf("%i", &x);
        scanf("%i", &y);

        if(x > y) 
        {
            printf("Decrescente\n");
        }
        else if(y > x) 
        {
            printf("Crescente\n");
        }
    } while(x != y);

    return 0;
}
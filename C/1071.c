/* 
Autor: Rafael Alves
Github: RJHXA
Problem: https://www.beecrowd.com.br/judge/pt/problems/view/1071
Language: C;
*/

#include <stdio.h>

int main() {

    int x, y, soma_impar = 0;

    scanf("%i", &x);
    scanf("%i", &y);

    if(x>y) 
    {
        for(int i= y+1; i < x; i++) 
        {
            if(i%2 == 1 || i%2 == -1) {
                soma_impar = soma_impar + i;
            }
        }
    }
    else if (y>x) 
    {
        for(int i= x+1; i < y; i++)
        {
            if(i%2 == 1 || i%2 == -1) {
                soma_impar = soma_impar + i;
            }
        }
    }
    else 
    {
        soma_impar = 0;
    }

    printf("%i\n", soma_impar);
    
    return 0;
}
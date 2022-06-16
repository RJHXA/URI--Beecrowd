/* 
Autor: Rafael Alves;
Github: RJHXA;
Problem: https://www.beecrowd.com.br/judge/pt/problems/view/1070;
Language: C;
*/

#include <stdio.h>

int main() {

    int num, contador_impares = 0, i = 0;

    scanf("%i", &num);

    while(contador_impares < 6)
    {
        if((num+i)%2 == 1)
        {
            contador_impares++;
            printf("%i\n", num+i);
        }

        i++;
    }
    
    return 0;
}
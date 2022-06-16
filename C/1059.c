/* 
Autor: Rafael Alves
Github: RJHXA
Problem: https://www.beecrowd.com.br/judge/pt/problems/view/1059
Language: C99;
*/

#include <stdio.h>
 
int main() {
 
    for(int i = 1; i < 101; i++)
    {
        if(i%2 == 0){
            printf("%i\n", i);
        }
    }

    return 0;
}
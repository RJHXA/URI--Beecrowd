/* 
Autor: Rafael Alves;
Github: RJHXA;
Problem: https://www.beecrowd.com.br/judge/pt/problems/view/1095;
Language: C99;
*/

#include <stdio.h>

int main() {

    int j = 60;

    for(int i = 0; 0 <= j; i++)
    {
        i++;
        printf("I=%i J=%i\n",i , j);

        i++;
        j = j - 5;
    }

    return 0;
}
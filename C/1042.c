/* 
Autor: Rafael Alves;
Github: RJHXA;
Problem: https://www.beecrowd.com.br/judge/pt/problems/view/1042;
Language: C99;
*/

#include <stdio.h>
 
int main() {
 
    int valor[3], v1, v2, v3, ordem;

    scanf("%i %i %i", &v1, &v2, &v3);

    valor[0] = v1;
    valor[1] = v2;
    valor[2] = v3;

    for(int i= 0; i<3; i++)
    {
        for(int k= 0; k<3; k++)
        {
            if(valor[i] < valor[k])
            {
                ordem = valor[k];
                valor[k] = valor[i];
                valor[i] = ordem;
            }
        }
    }

    printf("%i\n", valor[0]);
    printf("%i\n", valor[1]);
    printf("%i\n", valor[2]);

    printf("\n%i\n", v1);
    printf("%i\n", v2);
    printf("%i\n", v3);
 
    return 0;
}
/* 
Autor: Rafael Alves;
Github: RJHXA;
Problem: https://www.beecrowd.com.br/judge/pt/problems/view/1045;
Language: C99;
*/

#include <stdio.h>
 
int main() {
 
    double a, b, c, valor[3], ordem;

    scanf("%lf %lf %lf", &a, &b, &c);

    valor[0] = a;
    valor[1] = b;
    valor[2] = c;

    for(int i= 0; i<3; i++)
    {
        for(int k= 0; k<3; k++)
        {
            if(valor[i] > valor[k])
            {
                ordem = valor[k];
                valor[k] = valor[i];
                valor[i] = ordem;
            }
        }
    }
 
    if(valor[0] >= valor[1] + valor[2])
    {
        printf("NAO FORMA TRIANGULO\n");
    }
    else if(valor[0]*valor[0] == (valor[1] * valor[1]) + (valor[2] * valor[2]))
    {
        printf("TRIANGULO RETANGULO\n");
    }
    else if(valor[0]*valor[0] > (valor[1] * valor[1]) + (valor[2] * valor[2]))
    {
        printf("TRIANGULO OBTUSANGULO\n");
    }
    else
    {
        printf("TRIANGULO ACUTANGULO\n");
    }

    if(a == b && a == c)
    {
        printf("TRIANGULO EQUILATERO\n");
    }
    else if(a == b || a == c || b == c)
    {
        printf("TRIANGULO ISOSCELES\n");
    }

    return 0;
}
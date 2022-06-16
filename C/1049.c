/* 
Autor: Rafael Alves;
Github: RJHXA;
Problem: https://www.beecrowd.com.br/judge/pt/problems/view/1049;
Language: C;
*/

#include <stdio.h>
#include <string.h>
 
int main() {
 
    char nome1[11], nome2[11], nome3[11];

    scanf("%s %s %s", &nome1, &nome2, &nome3);

    if(strcmp(nome1, "vertebrado") == 0)
    {
        if(strcmp(nome2, "ave") == 0)
        {
            if(strcmp(nome3, "carnivoro") == 0)
            {
                printf("aguia\n");
            }
            else
            {
                printf("pomba\n");
            }
        }
        else 
        {
            if(strcmp(nome3, "onivoro") == 0)
            {
                printf("homem\n");
            }
            else
            {
                printf("vaca\n");
            }
        }
    }

    else
    {
        if(strcmp(nome2, "inseto") == 0)
        {
            if(strcmp(nome3, "hematofago") == 0)
            {
                printf("pulga\n");
            }
            else
            {
                printf("lagarta\n");
            }
        }
        else
        {
            if(strcmp(nome3, "hematofago") == 0)
            {
                printf("sanguessuga\n");
            }
            else
            {
                printf("minhoca\n");
            }
        }
    }

    return 0;
}
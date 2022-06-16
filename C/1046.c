/* 
Autor: Rafael Alves;
Github: RJHXA;
Problem: https://www.beecrowd.com.br/judge/pt/problems/view/1046;
Language: C;
*/

#include <stdio.h>
 
int main() {
 
    int inicio, fim, horas_final;

    scanf("%i %i", &inicio, &fim);

    if(inicio > fim)
    {
        horas_final = 24 - inicio + fim;
    }
    else if(inicio == fim)
    {
        horas_final = 24;
    }
    else
    {
        horas_final = fim - inicio;
    }

    printf("O JOGO DUROU %i HORA(S)\n", horas_final);

    return 0;
}
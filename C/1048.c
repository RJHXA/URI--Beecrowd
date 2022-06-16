/* 
Autor: Rafael Alves;
Github: RJHXA;
Problem: https://www.beecrowd.com.br/judge/pt/problems/view/1048;
Language: C;
*/

#include <stdio.h>
 
int main() {
 
    double salario, novo_salario, reajuste;
    int percentual[] = {15, 12, 10, 7, 4};

    scanf("%lf", &salario);

    if(salario >= 0 && salario <= 400)
    {
        novo_salario = salario + (salario*percentual[0])/100;
        reajuste = (salario*percentual[0])/100;

        printf("Novo salario: %.2f\n", novo_salario);
        printf("Reajuste ganho: %.2f\n", reajuste);
        printf("Em percentual: %i %%\n", percentual[0]);
    }
    else if(salario > 400 && salario <= 800)
    {
        novo_salario = salario + (salario*percentual[1])/100;
        reajuste = (salario*percentual[1])/100;

        printf("Novo salario: %.2f\n", novo_salario);
        printf("Reajuste ganho: %.2f\n", reajuste);
        printf("Em percentual: %i %%\n", percentual[1]);
    }
    else if(salario > 800 && salario <= 1200)
    {
        novo_salario = salario + (salario*percentual[2])/100;
        reajuste = (salario*percentual[2])/100;

        printf("Novo salario: %.2f\n", novo_salario);
        printf("Reajuste ganho: %.2f\n", reajuste);
        printf("Em percentual: %i %%\n", percentual[2]);
    }
    else if(salario > 1200 && salario <= 2000)
    {
        novo_salario = salario + (salario*percentual[3])/100;
        reajuste = (salario*percentual[3])/100;

        printf("Novo salario: %.2f\n", novo_salario);
        printf("Reajuste ganho: %.2f\n", reajuste);
        printf("Em percentual: %i %%\n", percentual[3]);
    }
    else
    {
        novo_salario = salario + (salario*percentual[4])/100;
        reajuste = (salario*percentual[4])/100;

        printf("Novo salario: %.2f\n", novo_salario);
        printf("Reajuste ganho: %.2f\n", reajuste);
        printf("Em percentual: %i %%\n", percentual[4]);
    }
 
    return 0;
}
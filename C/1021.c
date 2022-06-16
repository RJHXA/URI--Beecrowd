/* 
Autor: Rafael Alves;
Github: RJHXA;
Problem: https://www.beecrowd.com.br/judge/pt/problems/view/1021;
Language: C;
*/

#include <stdio.h>
 
int main() {
    
    double valor_total, valores[] = {100.0, 50.0, 20.0, 10.0, 5.0, 2.0, 1.0, 0.5, 0.25, 0.10, 0.05, 0.01};
    int i = 0, contador;
 
    scanf("%lf", &valor_total);
 
    printf("NOTAS:\n");
 
    valor_total+=1e-9;
 
    while (valores[i] >= 0.01)
    {
        contador = 0;
        while (valor_total >= valores[i])
        {
            valor_total -= valores[i];
            contador++;
        }
 
        if (valores[i] == 1.0)
        {
            printf("MOEDAS:\n");
        }

        if (valores[i] >= 2.0 )
        {
            printf("%d nota(s) de R$ %.2f\n", contador, valores[i]);
        }
 
        else
        {
            printf("%d moeda(s) de R$ %.2f\n", contador, valores[i]);
        }
 
        i++;
    }
 
    return 0;
 
}
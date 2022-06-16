/* 
Autor: Rafael Alves;
Github: RJHXA;
Problem: https://www.beecrowd.com.br/judge/pt/problems/view/1134;
Language: C99;
*/

#include <stdio.h>

int main() {

    int validador = 1, escolha, c_alcool = 0, c_gasolina = 0, c_diesel = 0;

    do
    {
        scanf("%i", &escolha);

        switch(escolha)
        {
        case 1:
            c_alcool++;
            break;

        case 2:
            c_gasolina++;
            break;

        case 3:
            c_diesel++;
            break;

        case 4:
            validador = 0;
            break;
        
        default:
            break;
        }
    } while(validador != 0);
    
    printf("MUITO OBRIGADO\n");
    printf("Alcool: %i\nGasolina: %i\nDiesel: %i\n", c_alcool, c_gasolina, c_diesel);

    return 0;
}
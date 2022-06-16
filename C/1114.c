/* 
Autor: Rafael Alves;
Github: RJHXA;
Problem: https://www.beecrowd.com.br/judge/pt/problems/view/1114;
Language: C;
*/

#include <stdio.h>

int main() {

    int senha = 2002, senha_tentativa = 1;

    while(senha_tentativa != senha)
    {
        scanf("%i", &senha_tentativa);

        if(senha_tentativa != senha)
        {
            printf("Senha Invalida\n");
        }
        else
        {
            printf("Acesso Permitido\n");
        }
    }

    return 0;
}
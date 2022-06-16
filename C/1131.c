/* 
Autor: Rafael Alves;
Github: RJHXA;
Problem: https://www.beecrowd.com.br/judge/pt/problems/view/1131;
Language: C;
*/

#include <stdio.h>

int main() {

    int validador = 1, gols_inter, gols_gremio, escolha;
    int contador_jogos = 0, vitoria_inter = 0, vitoria_gremio = 0, empates = 0;

    do
    {
        scanf("%i %i", &gols_inter, &gols_gremio);

        if(gols_inter > gols_gremio)
        {
            vitoria_inter++;
        }
        else if(gols_gremio > gols_inter)
        {
            vitoria_gremio++;
        }
        else
        {
            empates++;
        }

        contador_jogos++;

        printf("Novo grenal (1-sim 2-nao)\n");
        scanf("%i", &escolha);

        if(escolha == 2)
        {
            printf("%i grenais\n", contador_jogos);
            printf("Inter:%i\nGremio:%i\nEmpates:%i\n", vitoria_inter, vitoria_gremio, empates);

            if(vitoria_inter > vitoria_gremio)
            {
                printf("Inter venceu mais\n");
            }
            else if(vitoria_gremio > vitoria_inter)
            {
                printf("Gremio venceu mais\n");
            }
            else
            {
                printf("Nao houve vencedor\n");
            }

            validador = 0;
        }

    } while(validador != 0);

    return 0;
}
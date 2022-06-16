/* 
Autor: Rafael Alves;
Github: RJHXA;
Problem: https://www.beecrowd.com.br/judge/pt/problems/view/2929;
Language: C99;
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct no
{
    int num;
    struct no *prox;
} No;

typedef struct Pilha
{
    No *top;
} Pilha;

void empilha(Pilha *t, int num)
{
    No *aux = (No*) malloc(sizeof(No));

    if(aux != NULL)
    {
        aux->num = num;
        aux->prox = t->top;
        t->top = aux;
    }
}

void desempliha(Pilha *t)
{
    No *aux = t->top;
    
    if(aux != NULL)
    {
        t->top = aux->prox;
        aux->prox = NULL;
    }
    else
    {
        printf("EMPTY\n");
    }
}

void minimo(Pilha *p)
{
    No *aux = p->top;

    if(aux != NULL)
    {
        int minimo = aux->num;
        
        while(aux != NULL)
        {
            if(minimo > aux->num)
            {
                minimo = aux->num;
            }

            aux = aux->prox;
        }

        printf("%d\n", minimo);
    }
    else
    {
        printf("EMPTY\n");
    }
}

int main() {

    Pilha *pilha = (Pilha*) malloc(sizeof(Pilha));
    pilha->top = NULL;
    int loop_val;

    scanf("%d", &loop_val);

    for(int i = 0; i < loop_val; i++)
    {
        char opcao[10];
        scanf(" %s", opcao);

        if(strcmp(opcao, "PUSH") == 0)
        {
            int num;
            scanf("%d", &num);
            empilha(pilha, num);
        }
        else if(strcmp(opcao, "POP") == 0)
        {
            desempliha(pilha);
        }
        else if(strcmp(opcao, "MIN") == 0)
        {
            minimo(pilha);
        }
    }

    free(pilha);

    return 0;
}
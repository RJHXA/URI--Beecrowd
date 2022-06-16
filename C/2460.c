/* 
Autor: Rafael Alves;
Github: RJHXA;
Problem: https://www.beecrowd.com.br/judge/pt/problems/view/2460;
Language: C99;
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct no
{
    int num;
    struct no *prox;
} No;

No* inserir_fila(No *fila, int num)
{
    No *novo = (No*)malloc(sizeof(No));

    novo->num = num;
    if(fila == NULL)
    {
        novo->prox = NULL;
        return novo;
    }
    else
    {
        No *aux = fila;
        while(aux->prox != NULL)
        {
            aux = aux->prox; 
        }

        novo->prox = NULL;
        aux->prox = novo;

        return fila;
    }
}

No* remove_fila(No *fila, int num_remove)
{
    No *p, *pr;

    if(fila == NULL)
    {
        return fila;
    }

    for(pr = NULL, p = fila; p ; pr = p, p = p->prox)
    {
        if(num_remove == p->num)
        {
            break;
        }
    }

    if(p == NULL)
    {
        return fila;
    }

    if(pr == NULL) // Início
    {
        fila = fila->prox;
    }
    else if(p->prox == NULL) // Fim
    {
        pr->prox = NULL;
    }
    else // Meio
    {
        pr->prox = p->prox;
    }

    //free(p);
    return fila;
}

void print_fila(No *fila)
{
    while(fila != NULL)
    {
        if(fila->prox != NULL)
        {
            printf("%d ", fila->num);
        }
        else
        {
            printf("%d", fila->num);
        }
        fila = fila->prox;
    }
    printf("\n");
}

int main() {

    int tam_guarda, tam_remove, num, num_remove;
    No * fila = NULL;

    scanf("%d", &tam_guarda);
    
    for (int i = 0; i < tam_guarda; i++)
    {   
        scanf("%d", &num);


        fila = inserir_fila(fila, num);
        
    }

    scanf("%d", &tam_remove);

    for (int i = 0; i < tam_remove; i++)
    {
        scanf("%d", &num_remove);

        fila = remove_fila(fila, num_remove);
    }
   
    print_fila(fila);
    free(fila);

    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

void inserirOrdenado(t_lista *lista, int valor) {
    if (!lista) return;

    t_no *novo = malloc(sizeof(t_no));
    if (!novo) return;

    novo->dado = valor;
    novo->prox = NULL;

    if (lista->inicio == NULL) {
        lista->inicio = lista->fim = novo;
    } else if (valor < lista->inicio->dado) {
        novo->prox = lista->inicio;
        lista->inicio = novo;
    } else {
        t_no *atual = lista->inicio;
        t_no *anterior = NULL;

        while (atual != NULL && atual->dado < valor) {
            anterior = atual;
            atual = atual->prox;
        }

        anterior->prox = novo;
        novo->prox = atual;

        if (atual == NULL)
            lista->fim = novo;
    }

    lista->length++;
}

void deletarInicio(t_lista *lista) {
    if (!lista || !lista->inicio) return;

    t_no *temp = lista->inicio;
    lista->inicio = lista->inicio->prox;
    free(temp);
    lista->length--;

    if (lista->inicio == NULL)
        lista->fim = NULL;
}

void deletarFim(t_lista *lista) {
    if (!lista || !lista->inicio) return;

    if (lista->inicio == lista->fim) {
        free(lista->inicio);
        lista->inicio = lista->fim = NULL;
    } else {
        t_no *atual = lista->inicio;

        while (atual->prox != lista->fim) {
            atual = atual->prox;
        }

        free(lista->fim);
        atual->prox = NULL;
        lista->fim = atual;
    }

    lista->length--;
}

Felipe Oliveira Cunha 2412130016

#include <stdio.h>
#include <stdlib.h>
#include "fila.h"

void enfileira(Fila *fila, int valor) {
    if (!fila) return;

    t_no *novo = malloc(sizeof(t_no));
    if (!novo) return;

    novo->dado = valor;
    novo->prox = NULL;

    if (fila->inicio == NULL) {
        fila->inicio = fila->fim = novo;
    } else {
        fila->fim->prox = novo;
        fila->fim = novo;
    }

    fila->length++;
}

int desenfileira(Fila *fila) {
    if (!fila || !fila->inicio)
        return -1;

    t_no *temp = fila->inicio;
    int valor = temp->dado;
    fila->inicio = fila->inicio->prox;
    free(temp);
    fila->length--;

    if (fila->inicio == NULL)
        fila->fim = NULL;

    return valor;
}

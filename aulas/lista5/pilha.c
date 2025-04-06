#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

int topo(Pilha *pilha) {
    if (!pilha || !pilha->topo)
        return -1;
    return pilha->topo->dado;
}

void empilha(Pilha *pilha, unsigned int dado) {
    if (!pilha) return;

    t_no *novo = malloc(sizeof(t_no));
    if (!novo) return;

    novo->dado = dado;
    novo->prox = pilha->topo;
    pilha->topo = novo;
    pilha->length++;
}

int pop(Pilha *pilha) {
    if (!pilha || !pilha->topo)
        return -1;

    t_no *temp = pilha->topo;
    int valor = temp->dado;
    pilha->topo = pilha->topo->prox;
    free(temp);
    pilha->length--;
    return valor;
}

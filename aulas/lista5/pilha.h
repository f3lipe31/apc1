#ifndef PILHA_H
#define PILHA_H

typedef struct no {
    unsigned int dado;
    struct no *prox;
} t_no;

typedef struct pilha {
    t_no *topo;
    unsigned int length;
} Pilha;

int topo(Pilha *pilha);
void empilha(Pilha *pilha, unsigned int dado);
int pop(Pilha *pilha);

#endif

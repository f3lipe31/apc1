#ifndef FILA_H
#define FILA_H

typedef struct no {
    int dado;
    struct no *prox;
} t_no;

typedef struct fila {
    t_no *inicio;
    t_no *fim;
    unsigned int length;
} Fila;

void enfileira(Fila *fila, int valor);
int desenfileira(Fila *fila);

#endif

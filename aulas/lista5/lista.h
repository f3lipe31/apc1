Felipe Oliveira Cunha 2412130016

#ifndef LISTA_H
#define LISTA_H

typedef struct no {
    int dado;
    struct no *prox;
} t_no;

typedef struct lista {
    t_no *inicio;
    t_no *fim;
    unsigned int length;
} t_lista;

void inserirOrdenado(t_lista *lista, int valor);
void deletarInicio(t_lista *lista);
void deletarFim(t_lista *lista);

#endif

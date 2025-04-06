#include <stdio.h>
#include <stdlib.h>

typedef struct no {
    int dado;
    struct no *prox;
} t_no;

typedef struct lista {
    t_no *inicio;
    t_no *fim;
    unsigned int length;
} t_lista;

// Inserção ordenada (ordem crescente)
void inserirOrdenado(t_lista *lista, int valor) {
    if (!lista) return;

    t_no *novo = malloc(sizeof(t_no));
    if (!novo) return;

    novo->dado = valor;
    novo->prox = NULL;

    // Caso 1: lista vazia
    if (lista->inicio == NULL) {
        lista->inicio = lista->fim = novo;
    }
    // Caso 2: inserção no início
    else if (valor < lista->inicio->dado) {
        novo->prox = lista->inicio;
        lista->inicio = novo;
    }
    else {
        t_no *atual = lista->inicio;
        t_no *anterior = NULL;

        // Procurar posição de inserção
        while (atual != NULL && atual->dado < valor) {
            anterior = atual;
            atual = atual->prox;
        }

        // Inserção no meio ou fim
        anterior->prox = novo;
        novo->prox = atual;

        // Se for o último, atualize o fim
        if (atual == NULL)
            lista->fim = novo;
    }

    lista->length++;
}

// Deleta o primeiro nó
void deletarInicio(t_lista *lista) {
    if (!lista || !lista->inicio) return;

    t_no *temp = lista->inicio;
    lista->inicio = lista->inicio->prox;
    free(temp);
    lista->length--;

    if (lista->inicio == NULL)  // Se ficou vazia
        lista->fim = NULL;
}

// Deleta o último nó
void deletarFim(t_lista *lista) {
    if (!lista || !lista->inicio) return;

    // Caso único nó
    if (lista->inicio == lista->fim) {
        free(lista->inicio);
        lista->inicio = lista->fim = NULL;
    } else {
        t_no *atual = lista->inicio;

        // Percorre até penúltimo
        while (atual->prox != lista->fim) {
            atual = atual->prox;
        }

        free(lista->fim);
        atual->prox = NULL;
        lista->fim = atual;
    }

    lista->length--;
}

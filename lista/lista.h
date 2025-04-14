#ifndef LISTA_H
#define LISTA_H

typedef struct lista Lista;

Lista *criar_lista();
void deletar_lista(Lista *lista)
void listar(Lista *lista);
void listar_for(Lista *lista);
void listar_fim_inicio(Lista *lista);
void inserir_inicio(Lista *lista,int dado);
void inserir_fim(Lista *lista,int dado);
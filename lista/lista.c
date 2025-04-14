#include <stdio.h>
#include <stlib.h>
#include "Lista.h"

typedef struct no No;
typedef struct no{
 int dado;
  NO *prox;
}No;

struct lista{
 No *inicio;
 No *fim;
 int length;
};

No *criar no(int dado){
  No *novo = malloc(sizeof(No));
  if (novo) {
    novo -> dado = dado;
  }
  return novo;
}
Lista *criar_lista(){
  Lista *lista = calloc(1,sizeof(No));
  return lista;
}
void deletar_lista(Lista *lista){
  if (*lista == NULL)return;

  No *no = (*lista) -> inicio;
  while (no){
    No *aux = no ->prox;
    free(no);
    no = aux;
  }
  
  free (*lista);
  *lista = NULL;
}
void listar (Lista *lista){
  if (!lista) return;
  No *no = lista -> inicio;
  while (no) {
    printf ("(%d)",no -> dado);
    no = no->prox;
  }
  printf("NULL\n");
}
void listar_for(Lista *lista){
  No *no = lista -> inicio;
    while (no) {
      printf ("(%d)",no -> dado);
      no = no->prox;
    }
  for (No *no = lista -> inicio;no;no=no->prox){
    printf (("%d"),no->dado);
  }
    printf("NULL\n");
  }
void listar_rec(No *no){
  if (no ==NULL){
    printf("NULL\n");
    return;
  }
  listar_rec(no->prox);
  printf("%d",no -> dado);
}
void listar_fim_inicio(Lista *lista){
   if (!lista) return;
  listar_rec(lista ->inicio);
  printf("\n");
  
}
void inserir_inicio(Lista *lista,int dado){
  if (!lista) return;
    No *novo = criar_no(dado);
   if (!novo) return;
  novo -> prox = lista -> inicio;
  if (lista -> length == 0){
    lista -> fim = novo;
    lista -> length;
  }
}

void inserir_fim(Lista *lista,int dado){
   if (!lista) return;
  No *novo = criar_no(dado);
  if(!novo) return;
  if (lista -> length == 0){
    lista -> inicio =novo;
  } else {
    lista -> fim ->prox = novo;
    lista -> fim = novo;
  }
}
void deletar_inicio(Lista *lista){
  if (!lista) return;
  if (lista -> length ==0){
    printf("Lista vazia\n");
    return;
  }
  No *aux = lista -> inicio;
  lista -> inicio = aux -> prox;
  
}
#include <stdio.h>
#include <string.h>

int main(){ //0123456789
  char nome[31]; // um nomer de uma\0

  printf("Entre com seu nome: ");
  int deu_certo = scanf ("%[^\n]s",nome);
  printf("Ola %s!\n",nome);

  char primeiro_nome[21];
  char ultimo_nome[21];
  strcpy(primeiro_nome,"Felipe");//primeiro nome = Felipe
  strcpy(ultimo_nome,"Oliveira");
  strcpy(nome,primeiro_nome);
  strcat(nome,ultimo_nome); //nome = primeiro nome + ultimo
  printf("%s\n",nome);
  int tamanho = strlen(nome);
  printf("Seu nome tem %i caracteres\n",tamanho);
  printf("%s e %s são iguais? %i\n",primeiro_nome,ultimo_nome,strcmp(primeiro_nome,ultimo_nome));



  return 0;
}

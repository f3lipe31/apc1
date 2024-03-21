#include <stdio.h>

int main() {
  char nome[31];
  int quantidade;
  float valor;

  
  printf ("Entre com o nome do produto:");
  int deu_certo = scanf("%[^\n]s", nome);
  
  printf ("Entre com a quantidade do produto:");
  deu_certo = scanf("%i",&quantidade);
  
  printf ("Entre com o valor do produto:");
  deu_certo = scanf("%f",&valor);

  printf("----------------------------\n");
  printf("     N o T a  L e G a L     \n");
  printf("----------------------------\n");
  printf("ITEM          QTD      VALOR\n");
  printf("%-14s %02i %10.2f\n",nome,quantidade,valor);
  return 0;
}
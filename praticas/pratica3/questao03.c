//3. Faça um programa em C que imprima um qualitativo associado a uma nota lida conforme a tabela: 1 = Ruim; 2 = Insuficiente; 3 = Suficiente, 4 = Bom, 5 = Ótimo, e imprima Nota inválida nos demais casos.
#include <stdio.h>

int main(){
  int nota;
  printf("Insira a nota: ");
  int deu_certo = scanf("%i",&nota);

  switch (nota){
    case 1: printf ("Nota ruim\n");break;
    case 2: printf ("Nota insuficiente\n");break;
    case 3: printf ("Nota suficiente\n");break;
    case 4: printf ("Nota bom\n");break;
    case 5: printf ("Nota ótima\n");break;
    default : printf ("Tente outro número\n");break;
  }

  

  return 0;
}
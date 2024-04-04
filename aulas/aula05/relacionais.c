#include <stdio.h>


int main (){

  int numero1;
  int numero2;

  printf("Entre com o primeiro número: ");
  int deu_certo = scanf("%i",&numero1);


  printf("Entre com o segundo número: ");
  deu_certo =scanf("%i",&numero2);

  int sao_iguais = numero1 == numero2;
  printf("Os números são iguais? %i\n",sao_iguais);

  int sao_diferentes = numero1 != numero2;
  printf("Os números são diferentes? %i\n",sao_diferentes);

  int eh_maior = numero1 > numero2;
  printf("O número 1 é maior que o número 2? %i\n",eh_maior);

  int eh_menor = numero1 < numero2;
  printf("O número 1 é menor que o número 2? %i\n",eh_menor);

  int eh_maior_igual = numero1 >= numero2;
  printf ("O número 1 é maior igual ao número 2? %i\n",eh_maior_igual);

  int eh_menor_igual = numero1 <= numero2;
  printf ("O número 1 é menor igual ao número 2? %i\n",eh_menor_igual);

  return 0;
}
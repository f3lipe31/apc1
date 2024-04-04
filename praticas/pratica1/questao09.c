//9. Faça um programa em C que converta uma idade expressa em anos, meses e dias para um valor em dias. Considere um ano com 365 dias e um mês com 30 dias.

#include <stdio.h>
#include <math.h>


int main(){

  int idade_dias;
  int idade_meses;
  int idade_anos;
  
  printf("Insira sua idade em dias: ");
  int deu_certo = scanf("%i",&idade_dias);
  
  printf("Insira sua idade em meses: ");
    scanf("%i",&idade_meses);

  printf("Insira sua idade em anos: ");
    scanf("%i",&idade_anos);

  int quantidade_de_dias = idade_dias + (idade_meses*30)+(idade_anos*365);

  printf("A quantidade de dias de vida é: %i\n",quantidade_de_dias);
   
  
  

  return 0;
}
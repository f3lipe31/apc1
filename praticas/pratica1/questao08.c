//8. Faça um programa em C que converta um tempo expresso em segundos para um valor em horas, minutos e segundos (ex.: 1000 segundos corresponde a 0 horas 16 minutos e 40 segundos).

#include <stdio.h>
#include <math.h>


int main(){
int segundos;
  
  printf ("Insira os segundos: ");
  int deu_certo = scanf("%i",&segundos);
  
  int horas = segundos / 3600;
  printf("O valor em horas é: %i\n",horas);

  int minutos =  (segundos % 3600) / 60;
  printf("O valor em minutos é: %i\n",minutos);

  int segundo = (segundos % 3600)%60;
  printf("O valor em segundos é: %i\n",segundo);
  
   



  return 0;
}
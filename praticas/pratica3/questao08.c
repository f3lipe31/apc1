//8. Faça um programa em C que calcule o fatorial de um número inteiro.
#include <stdio.h>

int main(){
  int numero;
  printf("Calculo do fatorial (n!)\n\n");
  printf("Insira um numero >=0: ");
  int deu_certo = scanf("%i",&numero);

  if (deu_certo && numero >= 0){
    int fatorial =1;
    printf("%i! = ",numero);
    for(int i=numero;i>1;i--){
      fatorial =fatorial * i;
      printf("%i x ",i);
    }

    printf("1= %i\n",fatorial);
  }else {
    printf("Número invalido!!");
  }
   
  return 0;
}
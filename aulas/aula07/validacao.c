#include <stdio.h>

int main(){
  int numero;
  int numero_valido = 0;

  do {
   printf("Insira um numero de 1 e 10: ");
   int deu_certo = scanf("%i",&numero);
    numero_valido =  numero > 0 && numero <11;
   if (deu_certo){
    printf("Continue!\n");
   }else{
    printf("Número invalido!!\n");
    getchar();
   }
  } while (numero_valido == 0); 

  
  return 0;
}
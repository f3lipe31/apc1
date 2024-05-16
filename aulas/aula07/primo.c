#include <stdio.h>

int main(){
  int primo;
  
  printf("Insira um número >0: ");
  int deu_certo = scanf("%i",&primo);
  if (deu_certo && primo>0){
    int qtde_divisores = 0;
    for(int i=1;i<=primo;i++) {
      if(primo % i == 0){
        qtde_divisores++;
      }
    }
    if (qtde_divisores ==2){
      printf("O número %i é primo!\n",primo);
    }else{
      printf("Número %i não é primo!\n",primo);
    }
  }else{
    printf("Número invalido!!\n");
  }
  

  return 0;
}
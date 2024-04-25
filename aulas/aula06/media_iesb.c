#include <stdio.h>


int main(){
  float nota1;
  float nota2;

  printf("Informe a 1 nota: ");
  int deu_certo = scanf("%f",&nota1);

  int nota1_eh_valida = nota1 >= 0.0f && nota1 <= 10.0f;
  if(nota1_eh_valida){
    printf("Informe a 2 nota: ");
    deu_certo =scanf("%f",&nota2);

    int nota2_eh_valida = nota2 >= 0.0 && nota2<=10.0;
  if(nota2_eh_valida){
  float media = 0.4f * nota1 + 0.6f * nota2;
    printf("A sua media é: %.1f\n",media);

    if (media >=9.0f && media <=10.0f){
      printf("A menção é SS\n");
    }else if (media >=7.0f && media <=8.9f){
      printf("A menção é MS\n");
    }else if (media >=5.0f && media <=6.9){
      printf("A menção é MM\n");
   }else if (media >=3.0 && media <=4.9){
      printf("A menção é MI\n");
   }else if (media >= 0.1f && media <= 2.9){
      printf("A menção é II\n");
    }else if (media ==0.0f){
      printf("A menção é SR\n");
    }



      
  }else{
    printf("Colocou número errado lerdão le direito\n");
  }

  
  }else {
    printf("Colocou número errado lerdão le direito\n");
  }
  

  return 0;
}
#include <stdio.h>


int main (){
  int limite,soma;
  scanf ("%d",&limite);

  for (int n =1;n<= limite;n++){
    soma =0;
    for (int i = 1;i<n;i++){
      if (n%i == 0){
        soma +=i;
      }
    }
    if (soma == n){  
    printf ("%d eh perfeito\n",n);
  }
  }

  

  
  return 0;
}
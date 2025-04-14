#include <stdio.h>

int main(){
  int soma,limite;
  scanf("%d",&limite);
  
  for (int n =1;n<=limite;n++){
    soma = 0;
    for (int i =1;i<n;i++){
      if (n%i==0){
        soma +=i;
      }
    }
    if (soma == n){
      printf ("%d\n",n);
    }
  }
 

  return 0;
}
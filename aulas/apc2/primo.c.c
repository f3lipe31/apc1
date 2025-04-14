#include <stdio.h>

int main(){
  int n;
  scanf("%d",&n);
  if (n<=1){
    printf("Nao eh primo\n");
    return 0;
  }
  for (int i = 2;i<=n;i++){
    if (n%i == 0){
      printf ("N eh primo\n");
      return 0;
    } 
    
  }printf ("eh primo\n");
  return 0;
  


  return 0;
}
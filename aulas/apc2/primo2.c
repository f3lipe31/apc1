#include <stdio.h>

int main (){
  int n;
  scanf("%d",&n);
  if (n<=1){
    printf("%d n eh primo\n",n);
    retun 0;
  }
  for (int i=2;i<=n/2;i++){
    if (n%i == 0){
      printf ("%d n eh primo\n",n);
      return 0;
    }
  } 
  printf ("%d eh primo\n",n);




  return 0;
}
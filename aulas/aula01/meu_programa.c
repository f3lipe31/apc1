#include <stdio.h>

int main(){
  float nota1 = 0.0;
  float nota2 = 0.0;

  printf("Entra com a nota 1: ");
  scanf("%f", &nota1);

  printf("Entra com a nota 2: ");
  scanf("%f", &nota2);
  
  float media = 0.4*nota1 + 0.6*nota2;
  
  printf("A média é %.1f\n", media);

  if(media >=5.0) {
    printf("Passei!\n");
  } else {
    printf("Vamos de P3\n");
  }
    
    return 0;
}
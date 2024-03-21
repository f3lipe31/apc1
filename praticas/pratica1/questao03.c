//3. Faça um programa em C que calcule o perímetro de uma pizza (P = 2 x PI x r). Considere o raio um número inteiro e a constante PI igual a 3,1416.

#include <stdio.h>

int main(){

  float r=0.0;
  const float PI = 3.1416;
  
  printf("Coloque o raio:");
  scanf ("%f",&r);
    
  float perimetro = 2* PI *r;
  printf("O perímetro da pizza é:%.2f\n",perimetro);
  
  
  return 0;
}
// Faça um programa em C que calcule as raízes de uma equação do 2° grau através da fórmula de Bhaskara (-b +/- raiz_quadrada(b² - 4ac)/2a).

#include <stdio.h>
#include <math.h>


int main(){
  int a;
  int b;
  int c;

  printf ("Insira o valor de a: ");
  int deu_certo = scanf ("%i",&a);

  printf ("Insira o valor de b: ");
  deu_certo = scanf ("%i",&b);

  printf ("Inseira o valor de c: ");
  deu_certo = scanf ("%i",&c);

  double delta = b * b - 4 * a* c;
  double raiz_quadrada = sqrt (delta);
  double raiz1 = (- b + raiz_quadrada) / (2 * a);
  double raiz2 = (- b - raiz_quadrada) / (2 * a);

  printf ("A raiz1 é: %.2f\n",raiz1);
  printf ("A raiz2 é: %.2f\n",raiz2);

  
  
  

  

  

  return 0;
}
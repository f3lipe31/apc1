//7. Faça um programa em C que calcule a altura alcançada por um avião após ter percorrido uma certa distância (seno(ângulo) = altura/distância). Considere o ângulo de inclinação do avião menor ou igual a 45°.

  #include <stdio.h>
  #include <math.h>


int main (){
  int angulo;
  int distancia;
  const double PI=3.14;
  
  printf("Insira o angulo: ");
  int deu_certo = scanf ("%i",&angulo);

  double seno = sin (angulo*(PI / 180));
 
  printf("O seno do primeiro número é: %.2f\n",seno);

  printf ("Entre com a distancia: ");
  deu_certo = scanf ("%i",&distancia);
  

  double altura = seno* distancia;
  printf ("A altura alcançada pelo avião foi: %.2f\n",altura);
  

  return 0;
}
#include <stdio.h>
#include <math.h>


int main(){
  int numero1;
  int numero2;

  printf("Entre com o primeiro número: ");
  int deu_certo = scanf ("%i",&numero1);

  printf("Entre com o segundo número: ");
  deu_certo = scanf ("%i",&numero2);

  int soma = numero1 + numero2;
  printf("A soma dos números é: %i\n",soma);

  int subtracao = numero1-numero2;
  printf("A subtração dos números é: %i\n",subtracao);

  int multiplicacao = numero1*numero2;
  printf("A multipicação dos números é: %i\n",multiplicacao);

  float divisao = 1.0f* numero1 / numero2;
  printf ("A divisão dos números é: %.2f\n",divisao);

  int resto = numero1 % numero2;
  printf ("O resto da divsão da divisão é: %i\n",resto);

  // numero1 = numero1 + 1 
  // incremento
  printf ("O incremento do primeiro número é: %i\n",numero1 ++);
  printf ("O incremento do primeiro número é: %i\n",++numero1);

  //numero1 = numero1 -1
  // decremento

  printf ("O decremento do primeiro número é: %i\n",numero1 --);
  printf ("O decremento do primeiro número é: %i\n",--numero1);

  double raiz_quadrada = sqrt(numero1);
  printf("A raiz quadrada do primerio número é: %.2f\n",raiz_quadrada);

  double potencia =pow(numero1,3);
  printf("A 3a potencia do primeiro número é: %.2f\n",potencia);

  double logaritmo2 = log2(numero1);
  printf("O log2 do primeiro número é: %.2\n",logaritmo2);
  

  const double PI = 3.1416;
  double seno = sin (numero1*(PI / 180));
  printf("O seno do primeiro número é: %.2f\n",seno);

  double cosseno = cos (numero1*(PI / 180));
  printf("O cosseno do primeiro número é %.2f\n",cosseno);
  


  
  return 0;
}


  
  
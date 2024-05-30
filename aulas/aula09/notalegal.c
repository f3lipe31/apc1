#include <stdio.h>

int main(){
  enum unidade_e{ //agrupa constantes
    unidade,
    caixa,
    peso,
    lata
  };
  struct produto_t{ // agrupa variaveis
    char nome[31];
    int quantidade;
    int unidade;
    float preco;
    float valor;
  };
  float total = 0.0f;
  struct produto_t produto[5];
  for(int i =0;i<5;i++){ 
    printf("Entre com o nome do produto: ");
    int deu_certo = scanf("%s",produto[i].nome);
  
    printf("Entre com a quantidade do produto: ");
    deu_certo = scanf ("%i",&produto[i].quantidade);
  
    printf("Entre com a unidade do produto\n");
    printf("0-unid,1-caixa,2-peso,3-lata: ");
    deu_certo = scanf("%i",&produto[i].unidade);
  
    printf("Entre com o preço do produto: ");
    deu_certo = scanf("%f",&produto[i].preco);
  
    produto[i].valor = produto[i].preco * produto[i].quantidade;
    total =  total + produto[i].valor;
}
  printf("--------------------------------------\n");
  printf("\n          NOTA LEGAL\n");
  printf("--------------------------------------\n");
  printf("ITEM      QTD UND     PREÇO     VALOR \n");
  for(int i=0;i<5;i++){ 
    printf("%-9s %03i ",produto[i].nome,produto[i].quantidade);
    switch(produto[i].unidade){
      case unidade:printf("UN");break;
      case caixa:printf("CX");break;
      case peso:printf("KG");break;
      case lata:printf("LT");break;
    }
  printf("%10.2f% 11.2f\n",produto[i].unidade,produto[i].preco,produto[i].valor);
}   
printf("\nTOTAL ---------------------: %10.2f\n",total);
  return 0;
}
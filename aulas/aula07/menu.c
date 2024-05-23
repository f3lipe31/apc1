#include <stdio.h>
#include <stdlib.h>//fazer com que limpe o shell

int main(){
  
  int opcao = 0;
  while(opcao!=4){
    int deu_certo = system ("clear");
    printf("Meu Jogo\n");
    printf("1- iniciar\n");
    printf("2- Ver Ranking\n");
    printf("3 -Ajuda\n");
    printf("4 -Sair\n");
    printf("Escolha uma opção -> ");
    deu_certo = scanf("%i",&opcao);
    while (getchar() != '\n');//limpar buffer do teclado
    if (!deu_certo){
       opcao=0;
    }
    switch(opcao){
      case 1 : {
        char nome [31];
        deu_certo = system("clear");
        printf("Qual seu nome?\n ");
        deu_certo = scanf("%[^\n]s",nome);
        while (getchar() != '\n');//limpar buffer do teclado
        printf("Ola %s!\n",nome);
        printf("Pressione Enter para iniciar ");
        getchar();
        break;
     }
      case 2:{
        deu_certo = system("clear");
        printf("ranking - TOP 5\n");
        printf("1o lugar: Jose - 1000 pontos\n");
        printf("2o lugar: Maria - 800 pontos\n");
        printf("3o lugar: Bia - 700 pontos\n");
        printf("4o lugar: Pedro - 500 pontos\n");
        printf("5o lugar: Joao - 200 pontos\n");
        printf ("Pressione Enter para voltar ");
        getchar();
        break;
     } 
      case 3: break;
      case 4: printf("Ate Logo!\n");   break;
      default: printf("Opção invalida!  Pressione Enter para prosseguir");
               getchar();
    }
  }
  return 0;
}
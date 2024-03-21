//5. Faça um programa em C que converta um valor qualquer em Gigabytes para um valor em bytes (1GB = 1024³Bytes)

#include <stdio.h>

int main(){

float gigabytes;
  printf("Insira uma quantidade de Gigabytes:");
  scanf("%f",&gigabytes);

  float bytes = gigabytes*1024*1024*1024;
  printf("Quantidade de bytes:%.1f\n",bytes);
  
  
  return 0;
}
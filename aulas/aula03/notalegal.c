#include <stdio.h>

int main (){
  
  printf("\x1b[32m----------------------------\n");
  printf("     N o T a  L e G a L     \n");
  printf("----------------------------\x1b[0m\n");
  printf("\x1b[33mITEM          QTD      VALOR\n");
  printf("%-14s %02i %10.2f\n","Banana nanica",01,15.00);
  printf("%-14s %02i %10.2f\n","Maca fuji",10,50.00);
  printf("%-14s %02i %10.2f\n","Uva globo",05,26.00);
  //printf("Banana nanica   01     15.00\n");
  //printf("Maca fuji       10     50.00\n");
  //printf("Uva globo       05     26.00\n");
  printf("----------------------------\n");
  printf("TOTAL............:R$ %7.2f\n",91.00);

  return 0;
}
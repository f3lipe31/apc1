/*
  7. Faça um programa em C que leia o valor da hora de trabalho e o total de horas trabalhadas no mês e calcule o salário bruto, o salário líquido, e os impostos descontados. Considere IR igual a 25% e INSS igual a 11%.
  */
#include <stdio.h>

int main(){
  float valor_da_hora_de_trabalho = 150.00f;
  float total_de_horas_trabalhadas =100.0f;
  
  const float IR = 0.25f;
  const float INSS = 0.11f;

  float salario_bruto = valor_da_hora_de_trabalho * total_de_horas_trabalhadas;
  float imposto_renda = salario_bruto * IR;
  float imposto_previ = salario_bruto * INSS;
  float salario_liquido = salario_bruto - imposto_renda - imposto_previ;

  printf("\x1b[31m-------------------------------\n");
  printf("----------CONTRA CHEQUE--------\n");
  printf("-------------------------------\x1b[0m\n");
  printf("\x1b[32mSalario Bruto.....: R$ %5.2f\n" ,salario_bruto);
  printf("Imposto Renda.....: R$ %7.2f\n" ,imposto_renda);
  printf("Imposto Previ.....: R$ %1.2f\n" ,imposto_previ);
  printf("Salario Liquido...: R$ %6.2f\n" ,salario_liquido);

  
  
  return 0;
  
}

#include <stdio.h>

int main(void) {
  int F, C;
  printf("Digite a temperatura em graus Celsius: ";
  scanf("%d",&C);
  F=(9*C+160)/5;
  printf("A temperatura em Fahrenheit é: %d",F);
  return 0;
}
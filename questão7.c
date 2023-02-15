#include <stdio.h>

int main(){
  int horas, minutos, segundos, total;
  printf("Digite as horas: \n");scanf("%d", &horas);
  printf("Digite os minutos: \n");scanf("%d", &minutos);
  printf("Digite os segundos: \n");scanf("%d", &segundos);

total =  horas * 3600 + minutos * 60 + segundos;

printf("Total em segundos: %d\n", total);

return 0;

}

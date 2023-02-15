#include <stdio.h>

int main(){
  float valorReal, valorDolar;

  printf("Digite o valor em reais convertido: \n");scanf("%f",&valorReal);
  
  valorDolar = valorReal / 5.2;

printf("Valor em dolar %.2f \n", valorDolar);


    return 0;
}

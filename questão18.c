#include <stdio.h>
#define PI 3.14159

int main() {
  float raio;
  printf("Digite o raio: ");scanf("%f", &raio);
  
  printf("Diametro: %f\n", raio * 2);
  printf("Circunferencia: %f\n", PI * raio * 2);
  printf("Area: %f\n", PI * (raio * raio));
  
  
  return 0;
}

#include <stdio.h>

int main(){
  float volume, largura, altura, comprimento;
  printf("Digite o comprimento da caixa retangular: \n"); scanf("%f", &comprimento);
  printf("Digite a largura da caixa retangular: \n"); scanf("%f", &largura);
  printf("Digite a altura da caixa retangular: \n"); scanf("%f", &altura);

volume = comprimento*largura*altura;

printf("Volume da caixa: %.2f\n", volume);

    return 0;
}

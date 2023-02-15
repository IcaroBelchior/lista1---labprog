#include <stdio.h>

int main(){
    float altura, peso;  char sexo;
    printf("Insira sua altura: \n");scanf("%f", &altura);
    printf("Insira seu sexo(M ou F): \n");scanf("%s", &sexo);

    if(sexo=='M'){
      peso = (72.7*altura)- 58;
      printf("Peso ideal: %.2f\n", peso);
    }else{
      peso = (62.1*altura)- 44.7;
      printf("Peso ideal: %.2f\n", peso);
    }

    return 0;
}

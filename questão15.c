#include <stdio.h>

int main() {
    float dias, valorFinal, desconto, gratificação;

    printf("Quantos dias trabalhados? "); scanf("%f", &dias);
 
    if(dias<10){
    valorFinal = dias * 50,25;
    desconto = valorFinal * 10/100;
    valorFinal = valorFinal - desconto;
    }
    else if(dias>=10 && dias<=20){
    valorFinal = dias * 50,25;
    desconto = valorFinal * 10/100;
    gratificação  = valorFinal * 20/100;
    valorFinal = (valorFinal - desconto) + gratificação;
    }
   else if(dias>20){
    valorFinal = dias * 50,25;
    desconto = valorFinal * 10/100;
    gratificação  = valorFinal * 30/100;
    valorFinal = (valorFinal - desconto) + gratificação;
    }

    printf("A receber: R$%.2f\nDesconto R$%.2f\n", valorFinal, desconto);
    return 0;
}

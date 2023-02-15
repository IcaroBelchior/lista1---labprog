#include <stdio.h>

int main(){
    float valor, taxa;
    printf("Valor da conta: \n");scanf("%f", &valor);
    taxa = valor/10;

    printf("Taxa do garçom: %.2f\n", taxa);
    printf("Total: %.2f\n", valor + taxa);
    
    return 0;
}

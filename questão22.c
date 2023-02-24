#include <stdio.h>

int main(){
    int i;
    char str[] = "ABCabc0123$*+/ ";
    for(i = 0; i < strlen(str); i++){
        printf("%d\n", str[i]);
    }
    return 0;
}

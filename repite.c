#include <stdio.h>
int main(){
    char valor='a';
    while (valor<='z')
    {
        printf("\n%c = %d", valor, valor);
        valor++;
    }
    
}
#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int valor, soma=0;
    printf("Cloloca um valor\n");
    scanf("%d", &valor);
    while(valor!=0){
        soma+=valor;
        scanf("%d", &valor);
    }
    printf("Valor da soma e %d", soma);
}
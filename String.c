#include <stdio.h>
#include <locale.h>

int main(){
    char nome[50];
    puts("Coloca o teu nome\n");
    scanf("%49[^\n]s", nome);
    fflush(stdin);
    printf("Valor digitado:\n%s", nome);


}
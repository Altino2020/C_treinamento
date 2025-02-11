#include <stdio.h>
int main()
{
    //Variaveis
    int valor;
    printf("Coloca o valor aqui: ");
    scanf("%d", &valor);
    if (valor%2!=0)
    {
        printf("%d e Impar", valor);
    }
    else
    printf("%d e Par", valor);   
}
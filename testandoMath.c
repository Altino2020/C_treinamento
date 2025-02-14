#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    double numero;
    double valor;
    printf("Coloca valor");
    scanf("%lf", &numero);
    printf("Numero depois de raiz quadrada %lf\n", sqrt(numero));
}
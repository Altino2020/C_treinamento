#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    double numero;
    double valor;
    printf("Coloca valor\n");
    scanf("%lf", &numero);
    printf("Numero depois de raiz quadrada %.2lf\n", sqrt(numero));
}

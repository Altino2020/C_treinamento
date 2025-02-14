#include <stdio.h>
int main(){
    float valor;
    float euro=110.265;
    printf("Coloca o valor em euro\n");
    scanf("%f",&valor);
    float escudo=valor*euro;
    printf("O valor de %.3f Euros equivalem a %.3f Escudos", valor, escudo);
}
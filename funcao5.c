#include <stdio.h>

int i_cubo(int valor){
    printf("Este e primeiro?\n");
    return (valor*valor*valor);
    printf("Este e segundo?");
}
void main (void){
    printf("O cubo de 3 é: %d\n", i_cubo(3));
    printf("O cubo de 7 é: %d\n", i_cubo(7));
    printf("O cubo de 10 é: %d\n", i_cubo(10));
}
#include <stdio.h>
int main(){
    char v[16];
    printf ("Coloca um valor aqui:\n");
    scanf("%15[^\n]s", v);

    printf("Resultado: %s", v);
}
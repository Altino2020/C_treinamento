#include <stdio.h>
#include <locale.h>

void oi_pessoal(void){
    setlocale(LC_ALL, "Portuguese");
    printf("Olá Pessoal!\n");
}
void tres_olas(int msg_conta){
    int contador;
    for(contador=1; contador<=msg_conta; contador++)
    oi_pessoal();
}
void main(void){
    printf("Valos imprimir o numero de vezes que queremos\n");
    tres_olas(5);
}
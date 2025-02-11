#include <stdio.h>
void oi_pessoal(void)
{
    printf("Ola, pessoal!\n");
}
void ola_conta(int msg_conta)
{
    int contador;
    for (contador = 1; contador <= msg_conta; contador++)
        oi_pessoal();
}
void main(void)
{
    printf("Exibe a msg duas vezes\n");
    ola_conta(2);
    printf("Exibe a msg cinco vezes\n");
    ola_conta(5);
}
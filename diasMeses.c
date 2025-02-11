#include <stdio.h>
int main()
{
    int mes, ano;
    printf("Coloca um ano aqui: ");
    scanf("%d", &ano);
    printf("Coloca um mes aqui: ");
    scanf("%d", &mes);
    //Agora e colocar a expressao referente ao mes 2

    if (mes==2)
    {
        if (ano%4==0 && ano%100!=0 || ano%400==0)
        printf ("29");
        else
        printf("28");
    }
    else if (mes==4 || mes==6 || mes==9 || mes==11)
    {
        printf("30");
    }
    else
    {
    printf("31");
    }
}
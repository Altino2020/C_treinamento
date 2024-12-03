# include <stdio.h>
int main()
{
    int ano;
    printf("Coloca o ano aqui: ");
    scanf("%d", &ano);

    if (ano%4==0 && ano%100!=0 || ano%400==0)
    printf("Bissesto");
    else
    printf("Normal");
}
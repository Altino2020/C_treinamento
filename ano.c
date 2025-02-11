# include <stdio.h>
int main()
{
    int ano;
    printf("Coloca um ano aqui: ");
    scanf("%d", &ano);
    if (ano % 4 == 0 && ano % 100 != 0 || ano % 400 == 0)
    {
        printf("O ano e Bissesto");
    }
    else
    printf("O ano e normal");    
}
#include <stdio.h>
#include <locale.h>

int main()
{
    sertlocale(LC_ALL, "Portuguese");
    printf("Olá mundo!\n");
}

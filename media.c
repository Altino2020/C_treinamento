/*Determinacao da media de dois numeros*/
# include <stdio.h>
int main()
{
    int x, primeiro, segundo, media;
    printf("Coloca o primeiro numero: ");
    scanf("%d", &primeiro);
    printf("Coloca o segundo numero: ");
    scanf("%d", &segundo);
    x=2;
    media = (primeiro + segundo)/x;
    printf("O valor da media e: %d", media);
}
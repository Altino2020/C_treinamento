#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    printf("Olá mundo!\n");
    printf("Sizeof(char): %d\n", sizeof(char));
    printf("Sizeof(short): %d\n", sizeof(short));
    printf("Sizeof(int): %d\n", sizeof(int));
    printf("Sizeof(long): %d\n", sizeof(long));
    printf("Sizeof(long long): %d\n", sizeof(long long));
    printf("Sizeof(float): %d\n", sizeof(int));
    printf("Sizeof(float): %d\n", sizeof(int));
    
}
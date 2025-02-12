//Este e mais um teste para testar o git e github do que de ter um programa funcional

#include <stdio.h>
#include <locale.h>
int valorIntroduzido(){
    int valor;
    int maior = 0;
    int menor = 0;
    printf("Coloca o numero aqui\nColoca -1 para concluir\n");
    scanf("%d", &valor);
    return valor;
}
int main(){
    setlocale(LC_ALL, "Portuguese");
    int valor=valorIntroduzido();
    int maior = 0;
    int menor = 0;

    while(valor>=0){        
        if(valor!=-1){
            break;
        }
        if(valor>maior){
            maior=valor;
        }
        if(valor<menor){
            menor=valor;
        }        
    }
    printf("O maior número é: %d", maior);
    printf("O menor número é: %d", menor);    
}
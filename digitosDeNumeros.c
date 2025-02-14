/*Programa que permite ao utilizador introduzir um número e de seguida imprime a soma dos dígitos do número introduzido*/
#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    int numero, soma = 0, resto;

    // Aqui é solicitar ao utilizador para introduzir um número
    printf("Introduza um número: ");
    scanf("%d", &numero);

    // Calculando a soma dos dígitos do número
    while (numero != 0) {
        resto = numero % 10;  // Obtém o último dígito
        soma += resto;        // Adiciona o dígito à soma
        numero = numero / 10; // Remove o último dígito
    }

    // Imprime a soma dos dígitos
    printf("A soma dos dígitos é: %d\n", soma);

    return 0;
}
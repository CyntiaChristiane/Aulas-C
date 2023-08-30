#include <stdio.h>

// Salvar informação digitada do teclado na variável
/**
 * %d = int (número inteiro)
 * %f = float (número real)
 * %c = char (um caractere)
 * %s = char[] (um texto inteiro em uma única linha)
 * 
 * Exemplo número inteiro:
 * & indica que é uma referência a uma variável
 * scanf("%d", &nomeDaVariável);
*/

int main()
{
	// Declaração de números inteiros
	int n1, n2;

	// escrever na tela
	printf("Informe o primeiro numero: ");
	scanf("%d", &n1);

	printf("Informe o segundo numero: ");
	scanf("%d", &n2);

	// Se n1 > n2
	if(n1>n2){
		// Executa esse código quando for verdadeiro
		printf("O menor numero e: %d", n2);
	} else {
		// Executa esse quando for falso
		printf("O menor numero e: %d", n1);
	}

	return (0);
}
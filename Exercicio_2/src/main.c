#include <stdio.h>

/**
 * Condicional é sempre assim: if (expressão de comparação) { código }
 * 
 * Exemplo:
 * Se x é maior ou igual que 5 e menor que 10 então mostre 'X é maior ou igual a 5 e menor que 10'
 * 
 * int x = 6;
 * if (x >= 5 && x < 10) {
 * 	printf("X é maior ou igual a 5 e menor que 10");
 * }
 * 
 * Caso contrário se x é maior que 10 então diga 'X é maior que 10'
 * if (x >= 5 && x < 10) {
 * 	printf("X é maior ou igual a 5 e menor que 10");
 * } else if (x > 10) {
 * 	printf("X é maior que 10");
 * }
*/

int main()
{
	int n1, n2, n3;

	printf("Informe o primeiro numero: ");
	scanf("%d", &n1);

	printf("Informe o segundo numero: ");
	scanf("%d", &n2);

	printf("Informe o terceiro numero: ");
	scanf("%d", &n3);

	if(n1>n2 && n1>n3) {
		printf("O maior numero e: %d", n1);
	} else if (n2>n1 && n2>n3) {
		printf("O maior numero e: %d", n2);
	} else {
		printf("O maior numero e: %d", n3);
	}

	return (0);
}
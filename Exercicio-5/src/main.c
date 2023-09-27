#include <stdio.h>
#include <stdlib.h>

int main ()
{
	float not1,not2,not3,not4,media;

	printf ("Insira a primeira nota: ");
	scanf("%f", &not1);
	printf("Insira a segunda nota: ");
	scanf("%f", &not2);

	printf("Insira a terceira nota: ");
	scanf("%f", &not3);

	printf("Insira a quarta nota: ");
	scanf("%f", &not4);

	media = (not1+not2+not3+not4)/4;
	printf("A media e: %.2f", media);
	return 0;
}




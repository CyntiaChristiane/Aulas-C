#include <stdio.h>

int main()
{
	float saldo_md, valor_cred;

	printf("Informe o saldo medio no ultimo ano: ");
	scanf("%f", &saldo_md);

	if(saldo_md>3000) {
		valor_cred = saldo_md * 0.30;
	} else if (saldo_md >= 1800 && saldo_md < 3000) {
		valor_cred = saldo_md * 0.25;
	} else if (saldo_md >= 800 && saldo_md < 1800) {
		valor_cred = saldo_md * 0.20;
	} else {
		valor_cred = saldo_md * 0.10;
	}
	printf("O saldo medio informado e: %.2f\n", saldo_md);
	printf("O credito que tem direito e: %.2f", valor_cred);

	return 0;
}
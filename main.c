#include <stdio.h>
#include "calcNum.h"

int main(void) {
	int n;
	float x, serie;

	printf("(FLOAT) Digite o valor do x para ser usado em e^x");
	scanf("%f", &x);

	printf("(INT) Digite o valor de n para aumentar a precisão do cálculo");
	scanf("%i", &n);
		
	serie = taylor(x, n);	

	printf("%f \n", serie);
	return 0;
}

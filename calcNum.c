#include <stdio.h>
#include "calcNum.h"

float taylor(float x, int n) {
	int i;
	float sum, temp;

	i = 1;
	temp = 1;
	sum = 1;

	while(n >= i) {
		temp  *= x/(double) i;		
		sum += temp;
		i++;
	}
	return sum;
}

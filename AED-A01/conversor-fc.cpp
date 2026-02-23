// C = 5/9 (F - 32)

#include <stdio.h>

int main(){
	float c, f;

	printf ("\nDigte a temperatura em F:");
	scanf ("%f", &f);
	c = (f - 32) * 5/9;
	
	printf ("saida: %.3f", c);
	return 0;
}

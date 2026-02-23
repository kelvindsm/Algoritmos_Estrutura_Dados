#include <stdio.h>

int main (){
	int valor1, valor2, auxiliar;
	
	printf("\nValor 1: ");
	scanf("%d", &valor1);
	
	printf("\nValor 2:" );
	scanf("%d", &valor2);
	
	auxiliar = valor1;
	valor1 = valor2;
	valor2 = auxiliar;
	
	printf("valor 1 %.0f: ", valor1);
	printf("valor 2 %.0f: ", valor2);
	return 0;
}



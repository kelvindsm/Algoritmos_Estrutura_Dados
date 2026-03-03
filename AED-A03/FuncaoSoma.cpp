#include <stdio.h>

int soma(int n1, int n2){
	int somador = n1 + n2;
	return somador;
}

int soma3Valores(int n1, int n2, int n3){
	int somador = n1 + n2 + n3;
	return somador;
}

int main (){

	int num1, num2, num3;
	
	printf("\nDigite o primeiro numero: ");
	scanf("%d", &num1);
	printf("\nDigite o segundo numero: ");
	scanf("%d", &num2);
	printf("\nDigite o terceiro numero: ");
	scanf("%d", &num3);
	
	printf("\nO resultado da soma entre %d + %d = %d", num1, num2, soma(num1, num2));
	
	printf("\nSomando outros valores: 4 + 6 = %d", soma(4, 6));
	
	printf("\nO resultado da soma entre tres valores %d + %d + %d = %d", num1, num2, num3, soma3Valores(num1, num2, num3));	
}

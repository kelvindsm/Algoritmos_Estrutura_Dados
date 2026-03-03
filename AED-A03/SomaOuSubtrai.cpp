#include <stdio.h>

int soma(int n1, int n2){
	int somador = n1 + n2;
	return somador;
}

int subtrai(int n1, int n2){
	int sub = n1 - n2;
	return sub;
}

int main (){

	int num1, num2, seletor;
	
	printf("\nDigite o primeiro numero: ");
	scanf("%d", &num1);
	printf("\nDigite o segundo numero: ");
	scanf("%d", &num2);
	
	printf("\nDigite [1] para somar e [2] para subtrair: ");
	scanf("%d", &seletor);
	
	switch (seletor){
		case 1:
			printf("\nO resultado da soma entre %d + %d = %d", num1, num2, soma(num1, num2));
			break;
		case 2:
			printf("\nO resultado da subtracao entre %d - %d = %d", num1, num2, subtrai(num1, num2));
			break;
		default:
			printf("\nValor invalido");
	}
}

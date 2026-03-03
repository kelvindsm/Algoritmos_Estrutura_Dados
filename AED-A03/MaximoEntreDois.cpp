#include <stdio.h>

int maximo (int n1, int n2){
	
	if ( n1 > n2){
		return n1;
	} else {
		return n2;
	}
}

int main (){
	
	int num1, num2;
	
	printf("\nDigite o primeiro numero: ");
	scanf("%d", &num1);
	printf("\nDigite o segundo numero: ");
	scanf("%d", &num2);
	
	printf("\nO maior entre %d e %d e o valor = %d", num1, num2, maximo(num1, num2));
}

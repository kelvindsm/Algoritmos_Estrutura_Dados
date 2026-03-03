#include <stdio.h>

int MathPow(int base, int expo){
	
	int valorPotencia = 1;
	for (int i = 1; i <= expo; i++) {
		valorPotencia = valorPotencia * base;
	}
	return valorPotencia;
}

int main (){
	
	int base, expoente;
	
	printf("\nDigite o valor da base: ");
	scanf("%d", &base);
	printf("\nDigite o expoente: ");
	scanf("%d", &expoente);
	
	printf("resutlado: %d", MathPow(base, expoente));
}

#include <stdio.h>
#define N 4

int main(){
	
	int soma = 0, vetor [N];
	
	printf("\nDigite quatro numeros: ");
	for (int i = 0; i<N; i++) {
		printf("\nPosicao %d: ", i + 1);
		scanf("%d", &vetor[i]);
		soma = soma + vetor[i];
	}
	
	printf("\n\n\n---------------------");
	
	printf("\nSaida de dados: ");
	for (int j = 0; j < N; j++) {
		printf("\nValor posicionado em %d = %d", j + 1, vetor[j]);
	}
	printf("\nSoma dos valores = %d", soma);
}

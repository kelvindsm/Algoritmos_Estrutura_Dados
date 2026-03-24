#include <stdio.h>

int main(){
	
	int tam = 5;
	int vetor[tam] = {23, 4, 67, -8, 21};
	int i, j, menor, troca;
	
	printf("Vetor desordenado: ");
	for(i = 0; i < tam; i++){
		printf("%d; ", vetor[i]);
	}
	
	for(i = 0; i < tam - 1; i++){
		menor = i;
		for(j = i + 1; j < tam; j++){
			if(vetor[j] < vetor[menor]){
				menor = j;
			}
		}
		if(i != menor){
			troca = vetor[i];
			vetor[i] = vetor[menor];
			vetor[menor] = troca;
		}
	}
	
	printf("\n\nVetor ordenado (SelectionSort): ");
	for(i = 0; i < tam; i++){
		printf("%d; ", vetor[i]);
	}	
}

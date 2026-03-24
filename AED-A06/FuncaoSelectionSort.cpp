#include <stdio.h>

void MostrarVetor(int vetor[], int tamanhoVetor){
	
	for(int i = 0; i < tamanhoVetor; i++){
		printf("%d; ", vetor[i]);
	}
}

void SelectionSort(int vetor[], int tamanhoVetor){
	int i, j, menor, troca;
	
	for(i = 0; i < tamanhoVetor - 1; i++){
		menor = i;
		for(j = i + 1; j < tamanhoVetor; j++){
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
	for(i = 0; i < tamanhoVetor; i++){
		printf("%d; ", vetor[i]);
	}	
}

int main(){
	
	int tam = 5;
	int vetor[tam] = {23, 4, 67, -8, 21};
	
	printf("Vetor desordenado: ");
	MostrarVetor(vetor, tam);
	
	printf("\n\nVetor ordenado (SelectionSort): ");
	SelectionSort(vetor, tam);
}

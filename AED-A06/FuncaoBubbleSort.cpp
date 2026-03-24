#include <stdio.h>

void MostrarVetor(int vetor[], int tamanhoVetor){
	
	for(int i = 0; i < tamanhoVetor; i++){
		printf("%d; ", vetor[i]);
	}
}

void BubbleSort(int vetor[], int tamanhoVetor){
	
	int i, j, k, aux, flag = 0; 
	
	for(i = 0; i < tamanhoVetor - 1; i++){
		for(j = 0; j < tamanhoVetor - i - 1; j++){
			if (vetor [j] > vetor[j + 1]){
				aux = vetor[j];
				vetor[j] = vetor[j + 1];
				vetor[j + 1] = aux;
				flag = 1;
			}
			if(flag == 0){
				break;
			}
		}
	}
	
	for(k = 0; k < tamanhoVetor; k++){
		printf("%d; ", vetor[k]);
	}
}

int main(){
	
	int tam = 5;
	int vetor[tam] = {23, 4, 67, -8, 21};
	// int vetor[tam] = {1, 2, 3, 4, 5};
		
	printf("Vetor desordenado: ");
	MostrarVetor(vetor, tam);
	
	printf("\nVetor ordenados: ");
	BubbleSort(vetor, tam);
}

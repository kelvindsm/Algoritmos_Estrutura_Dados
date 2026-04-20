#include <stdio.h>
#define limit 5

int main(){
	
	int vetor[5] = {23, 4, 67, -8, 21}, i, j, aux, trocou = 0;
	
	printf("Vetor nao ordenado: ");
	for(i = 0; i < limit; i++){
		printf("%d; ", vetor[i]);
	}
	
	for(i = 0; i < limit - 1; i++){
		for(j = 0; j < limit - i - 1; j++){
			if(vetor[j] > vetor [j + 1]){
				aux = vetor[j];
				vetor[j] = vetor[j + 1];
				vetor[j + 1] = aux;
				trocou = 1;
			}
		}
		if(trocou == 0){
			break;
		}
	}
	
	printf("\n\nVetor ordenado: ");
	for(i = 0; i < limit; i++){
		printf("%d; ", vetor[i]);
	}
}

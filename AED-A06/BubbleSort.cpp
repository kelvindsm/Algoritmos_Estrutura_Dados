#include <stdio.h>

int main(){
	
	int tam = 5, contador = 0, contadorE = 0, flag = 0;
	int i, j, aux;
	int vetor[tam] = {23, 4, 67, -8, 21};
	//int vetor[tam] = {1, 2, 3, 4, 5};
		
	printf("Vetor desordenado: ");
	for(i = 0; i < tam; i++){
		printf("%d; ", vetor[i]);
	}
	
	// bubble sort :D
	for(i = 0; i < tam - 1; i++){
		for(j = 0; j < tam - i - 1; j++){
			if (vetor [j] > vetor[j + 1]){
				aux = vetor[j];
				vetor[j] = vetor[j + 1];
				vetor[j + 1] = aux;
				flag = 1;
			}
			if(flag == 0){
				break;
			}
			contador++;
		}
		contadorE++;
	}
	
	printf("\nVetor ordenados: ");	
	for(i = 0; i < tam; i++){
		printf("%d; ", vetor[i]);
	}
	
	printf("\n\nRepeticoes internas: %d", contador);
	printf("\nRepeticoes externas: %d", contadorE);
}

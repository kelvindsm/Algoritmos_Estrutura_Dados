#include <stdio.h>
#include <locale.h>

int main(){
	
	int limit = 10;
	int vetor[limit] = {-8, -5, 1, 4, 14, 21, 23, 54, 67, 90};
	int inicio, fim, meio, busca, encontrou, contador;
	
	contador = 0;
	inicio = 0;
	fim = limit - 1;
	encontrou = -1;
	
	printf("\nDigite o valor de busca: ");
	scanf("%d", &busca);
	
	while(inicio <= fim){
		meio = (inicio + fim) / 2;
		if(busca < vetor[meio]){
			fim = meio - 1;
		} else if (busca > vetor[meio]){
			inicio = meio + 1;
		} else {
			encontrou = meio;
			break;
		}
		contador++;
	}
	
	if (encontrou == -1){
		printf("\nValor nao encontrado ");
	} else {
		printf("\nValor encontrado na posicao %d ", encontrou);
	}
	
	printf("\nContador: %d \n\n", contador);
	
	for(int i = 0; i < limit; i++){
		printf(" %d;", vetor[i]);
	}
}

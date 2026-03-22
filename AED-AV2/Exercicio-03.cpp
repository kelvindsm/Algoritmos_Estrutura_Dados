/* 1. 	Refaça o exercício 2 sobre algoritmos busca (pesquisa) binária com dados ordenados. Refaça usando função. */

#include <stdio.h>

int buscador(float vetor[], int limit, float vBusca){
	int inicio, meio, fim = limit -1, encontrou;
	inicio = 0;
	encontrou = -1;
	
	while(inicio <= fim){
		meio = (inicio + fim) / 2;
		if(vBusca < vetor[meio]){
			fim = meio - 1;
		} else if(vBusca > vetor[meio]){
			inicio = meio + 1;
		} else{
			return meio;
			break;
		}
	}
	return -1;
}

int main(){
	
	float vetor[6] = {1.2, 2.2, 3.2, 4.2, 5.2, 6.2}, busca = 0.0;
	int limit = 6;
	
	printf("\nDigite o valor para buscar no vetor: ");
	scanf("%f", &busca);
	
	int encontrou = buscador(vetor, limit, busca);
	if(encontrou == -1){
		printf("\nValor não encontrado");
	} else {
		printf("\nValor encontrado na posição: %d", encontrou);
	}
	
	printf("\nValores na horizontal: \n");
	for(int j = 0; j < limit; j++){
		printf("%f; ", vetor[j]);
	}
	
	printf("\nValores na vertical: \n");
	for(int j = 0; j < limit; j++){
		printf("\n%f;", vetor[j]);
	}
}

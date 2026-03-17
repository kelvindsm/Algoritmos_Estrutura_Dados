#include <stdio.h>
#include <locale.h>

int Buscador(int vetor[], int tamVetor, int busca){
	int inicio, meio, fim, encontrou;
	inicio = 0;
	fim = tamVetor - 1;
	encontrou = -1;
	
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
	}
	return encontrou;
}

int MostrarVetor(int vetor[], int tamanho){
	for(int i = 0; i < tamanho; i++){
		printf(" %d;", vetor[i]);
	}
}

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int limit = 10;
	int vetor[limit] = {-8, -5, 1, 4, 14, 21, 23, 54, 67, 90};
	int inicio, fim, meio, busca, encontrou, contador;
	
	printf("\nDigite o valor de busca: ");
	scanf("%d", &busca);
	
	encontrou = Buscador(vetor, limit, busca);
	
	if (encontrou == -1){
		printf("\nValor nao encontrado ");
	} else {
		printf("\nValor encontrado na posicao %d ", encontrou);
	}
	
	printf("\nValores do vetor: ");
	for(int i = 0; i < limit; i++){
		printf(" %d;", vetor[i]);
	}
	
	printf("\nFunção mostrar vetor: ");
	MostrarVetor(vetor, limit);
}

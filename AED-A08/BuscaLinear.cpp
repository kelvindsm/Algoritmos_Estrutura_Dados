#include <stdio.h>
#define limit 4

int main(){
	
	float vetor[limit], busca;
	int i, posicao = -1;
	
	// entrada de valores
	printf("Digite %d valores: ", limit);
	for(i = 0; i < limit; i++){
		printf("\nDigite o valor da posicao %d: ", i);
		scanf("%f", &vetor[i]);
	}
	
	// busca linear
	printf("\nDigite o valor para buscar: ");
	scanf("%f", &busca);
	for(i = 0; i < limit; i++){
		if (busca == vetor[i]){
			posicao = i;
			break;
		}
	}
	
	if(posicao == -1){
		printf("\nValor nao encontrado");
	} else {
		printf("\nValor encontrado na posicao %d", posicao);
	}
}

#include <stdio.h>

int main(){
	
	int qtd = 7;
	int vet[qtd] = {23, 4, 67, -8, 54, 90, 21};
	int valorPesquisa, posicao, i;
	
	posicao = -1;
	
	printf("Digite o valor a ser procurado: ");
	scanf("%d", &valorPesquisa);
	
	for (i = 0; i < qtd; i++){
		if (vet[i] == valorPesquisa){
			posicao = i;
			break;
		}
	}
	
	if (posicao == -1){
		printf("Valor nao encontrado");
	} else {
		printf("Valor %d encontrado na posicao %d", valorPesquisa,posicao);
	}
}

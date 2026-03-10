#include <stdio.h>
#include <locale.h>

int buscaLinear (int v[], int n, int busca){
	
	for (int i = 0; i < n; i++){
		if (v[i] == busca){
			return i;
		}
	}
	return -1;
}

int main(){
	setlocale(LC_ALL, "Portuguese");
	int qtd = 7;
	int vet[qtd] = {23, 4, 67, -8, 54, 90, 21};
	int valorPesquisa, i;
	
	printf("Digite o valor a ser procurado: ");
	scanf("%d", &valorPesquisa);
	
	int posicao = buscaLinear(vet, qtd, valorPesquisa);
	
	if (posicao == -1){
		printf("Valor não encontrado");
	} else {
		printf("Valor %d encontrado na posição %d", valorPesquisa,posicao);
	}
}

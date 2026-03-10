#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int qtd = 7;
	int vet[qtd] = {-8, 4, 21, 23, 54, 67, 90};
	int valorPesquisa, i;
	
	int flag = -1;
	
	printf("Digite o valor para pesquisar: ");
	scanf("%d", &valorPesquisa);
	
	for (i = 0; i < qtd; i++){
		if (vet[i] == valorPesquisa){
			flag = i;
			break;
		} else if (vet[i] > valorPesquisa){
			break;
		}
	}
	
	if (flag == -1){
		printf("Valor não encontrado");
	} else {
		printf("\nValor encontrado na posição %d.\n", flag);
	}
	
	printf("\nValores na horizontal:\n");
	for (i = 0; i < qtd; i++){
		printf("%d,\t", vet[i]);
	}
}

#include <stdio.h>
#define size 4
int list[size];
int qtd = 0;

int isEmpty(){
	
	if(qtd == 0){
		return 1;
	} else {
		return 0;
	}
}

int isFull(){
	
	if(qtd == size){
		return 1;
	} else {
		return 0;
	}
}

void inserirFinal(int valor){
	
	if(isFull()){
		printf("\nLista cheia, impossivel adicionar mais valores!");
	} else {
		list[qtd] = valor;
		printf("\nInserindo valor: %d\n", list[qtd]);
		qtd++;
	}
}

void mostrar(){
	if(isEmpty()){
		printf("\nLista vazia!");
	} else {
		printf("Lista: ");
		for(int i = 0; i < qtd; i++){
			printf("%d ", list[i]);
		}
		printf("\n");
	}
}

void inserirValorPos(int posicao, int valorInserir){
	
	int aux;
	
	if(isFull()){
		printf("\nLista cheia, impossivel inserir");
	}
	if(posicao < 0 || posicao > qtd){
		printf("\nPosicao invalida");
	}
	for(int i = qtd; i > pos; i--){
		lista[i] = lista[i - 1];
	}
	lista[pos]= valor;
	printf("\nValor %d inserido.", lista[pos]);
	qtd++;
}

void removerFinal(){
	if(isEmpty()){
		printf("\nLista vazia, impossível remover valores!");
	} else {
		qtd--;
		printf("\nRemovendo valor: %d\n", list[qtd]);
	}
}

void buscarValor(int busca){
	
	int encontrou;
	if(isEmpty()){
		printf("\nLista Vazia!");
	} else {
		for(int i = 0; i < size; i++){
			if(list[i] == busca){
				printf("\nValor encontrado na posicao %d\n", i);
				break;
			} else {
				printf("\nValor nao encontrado");
			}
		}
	}
}

void atualizarValor(int posicao, int novoValor){
	
	if(isEmpty()){
		printf("\nLista Vazia!");
	if(posicao < 0 || posicao >= qtd){
		printf("\nIndice invalido!");
	}
		int valorAntigo = list[posicao];
		list[posicao] = novoValor;
		printf("\nAtualizando valor da posicao %d (antigo valor: %d) para %d\n", posicao, valorAntigo, list[posicao]);
	}
}

int main(){
	
	inserirFinal(10);
	mostrar();
	inserirFinal(20);
	mostrar();
	inserirFinal(30);
	mostrar();
	inserirFinal(40);
	mostrar();
	inserirFinal(50);
	atualizarValor(2, 50);
	mostrar();
	buscarValor(20);
	removerFinal();
	mostrar();
	removerFinal();
	mostrar();
	removerFinal();
	mostrar();
	removerFinal();
	mostrar();
}

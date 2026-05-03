/*
1. 	Elabore um pequeno resumo sobre a teoria de lista estática e acesso sequencial.
	R: lista estática é uma lista baseada em arrays onde o tamanho maximo de elementos é definido de forma fixa. Os elementos são 
	armazenados em posicoes próximas na memória. A principal vantagem é o acesso direto instantaneo a qualquer elemento, mas a
	desvantagem é o desperdicio de memoria.
2. 	Dentro da função main, organize o programa e desenvolva um menu com todas as opções possíveis e mensagem de erro.

3. 	Desenvolva mais estas funcionalidades no programa lista estática:

	a.	Crie procedimento remove valor em qualquer posição (delete). No main, teste
	b. 	Crie procedimento remove valor numa posição específica (delete). Teste
	c. 	Crie o procedimento tamanho lista. No main, teste
	d. 	Cria procedimento limpar lista. No main, teste

4. 	Use sua criatividade e implemente mais uma rotina útil na estrutura de dados list (lista).

*/

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
	if(isFull()){
		printf("\nLista cheia, impossivel inserir");
		return;
	}
	if(posicao < 0 || posicao > qtd){
		printf("\nPosicao invalida");
		return;
	}
	for(int i = qtd; i > posicao; i--){
		list[i] = list[i - 1];
	}
	list[posicao] = valorInserir;
	printf("\nValor %d inserido.", list[posicao]);
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

void deletarValor(int valor){
	
	int pos = -1;
	for(int i = 0; i < qtd; i++){
		if(list[i] == valor){
			pos = i;
			break;
		}
	}
	if(isEmpty()){
		printf("\nLista vazia!");
		return;
	}
	if(pos != -1){
		for(int i = pos; i < qtd -1; i++){
			list[i] = list[i + 1];
		}
		qtd--;
		printf("\nValor %d removido!", valor);
	} else {
		printf("\nValor não encontrado na lista!");
	}
}

void deletarPosicao(int posicao){
	if(isEmpty()){
		printf("\nLista vazia!");
		return;
	}
	if(posicao < 0 || posicao >= qtd){
		printf("\nIndice invalido!");
		return;
	}
	//remover valor:
	int valorRemovido = list[posicao];
	printf("\nRemovendo o valor %d da posicao %d ", valorRemovido, posicao);
	list[posicao] = 0;
	
	for(int i = posicao; i < qtd - 1; i++){
		list[i] = list[i + 1];
	}
	qtd--;
}

void tamanhoLista(){
	printf("\nTamanho atual da lista: %d, quantidade maxima permitida: %d", qtd, size);
}

void limparLista(){
	qtd = 0;
	printf("\nLista vazia!");
}

void inverterLista(){
	
	if(isEmpty() || qtd == 1){
		printf("\nImpossivel inverter a lista, nao ha valores suficientes na lista!");
	}
	int temp;
	for(int i = 0; i < qtd / 2; i++){
		temp = list[i];
		list[i] = list[qtd - 1 - i];
		list[qtd - 1 - i] = temp;
	}
	printf("\nLista invertida com sucesso!");
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
	mostrar();
	deletarPosicao(1);
	mostrar();
	deletarValor(30);
	mostrar();
	tamanhoLista();
	inverterLista();
	mostrar();
	removerFinal();
	mostrar();
	removerFinal();
	mostrar();
	removerFinal();
	mostrar();
	removerFinal();
	mostrar();
}

/*
-	Use o programa de queue (fila) com alocação estática e acesso sequencial da aula que está publicado na sala on-line (Moodle) e 
	faça as seguintes alterações e ampliações:

1.	Elabore um pequeno resumo sobre a teoria de fila e sua implementação.
	Filas são estruturas de dados que permitem organizar os dados seguindo a regra FIFO "First in, first out", isso é, o primeiro
	elemento a entrar, é o primeiro elemento a sair, diferente da regra FILO "First in, last out", em que o primeiro que entra é
	o ultimo a sair.
	A fila utiliza vetor de tamanho fixo e uma variável que controla a posição em que determinado elemento se encontra e o quão
	cheio este vetor está, se o numero da variável é igual ao tamanho do vetor, o vetor está cheio, por exemplo.
	
2.	Organize a função main e desenvolva um menu com todas as opções possíveis e mensagem de erro.

3.	Use sua criatividade e implemente mais uma rotina útil na estrutura de dados queue (fila).
*/

#include <stdio.h>
#include <locale.h>
#define size 4
int rear;
int staticQueue[size];

void startQueue(){
	rear = -1;
}
int isEmpty(){
	if(rear == - 1){
		return 1;
	} else {
		return 0;
	}
}
int isFull(){
	if(rear == size - 1){
		return 1;
	} else {
		return 0;
	}
}
void enqueue(){	
	if(isFull()){
		printf("\nLista cheia, nao adiicione mais elementos!");
	} else {
		int elemento = 0;
		printf("\nInsira um elemento: ");
		scanf("%d", &elemento);
		rear++;
		staticQueue[rear] = elemento;
	}
}
void showQueue(){
	if(isEmpty()){
		printf("\nLista vazia, nada para mostrar!");
	} else {
		printf("\n");
		for(int i = 0; i <= rear; i++){
			printf("%d; ", staticQueue[i]);
		}
		printf("\n");
	}
}
void dequeue(){
	if (isEmpty()){
		printf("\nLista vazia, nao e possivel executar esta opcao!");
	}
	
	printf("\nRemovido da fila: %d\n", staticQueue[0]);
	for(int i = 0; i < rear; i++){
		staticQueue[i] = staticQueue[i + 1];
	}
	rear--;
}
void peek(){
	if (isEmpty()){
		printf("\nLista vazia, nao e possivel executar esta opcao!");
	} else {
		printf("\nPrimeiro elemento da fila: %d", staticQueue[0]);
	}
}
void queueSize(){
	if(!isEmpty()){
		printf("\nTamanho da fila: %d", rear + 1);
	}
}
void updateFront(){
	if(isEmpty()){
		return;
	}
	int novoValor = 0;
	printf("\nElemento do inicio da fila: %i", staticQueue[0]);
	printf("\nDigite um valor para mudar o inicio: ");
	scanf("%d", &novoValor);
	staticQueue[0] = novoValor;
}
void queueClean(){
	if(isEmpty())
		return;
	rear = -1;
	printf("Fila limpa!");
}
void queueSearch(){
	if (isEmpty()){
		printf("\nLista vazia, nao e possivel executar esta opcao!");
	} else {
		int busca = 0;
		int posicao = -1;
		printf("\nDigite o valor que deseja buscar: ");
		scanf("%d", &busca);
		
		for(int i = 0; i < size; i++){
			if(staticQueue [i] == busca){
				posicao = i;
				break;
			}
		}
		if (posicao == -1){
			printf("\nValor nao encontrado na fila!");
		} else {
			printf("\nElemento encontrado na posicao %d da fila", posicao);
		}
	}
}
void options(){
	printf("\n\n=== Escolha uma opção para manipular a fila: ===");
	printf("\n0 - Encerrar programa");
	printf("\n1 - Mostrar fila");
	printf("\n2 - Adicionar valores a fila");
	printf("\n3 - Remover o primeiro valor da fila");
	printf("\n4 - Pegar o primeiro valor da fila");
	printf("\n5 - Mostrar tamanho da fila");
	printf("\n6 - Atualizar o primeiro valor");
	printf("\n7 - Procurar elemento da fila");
	printf("\n8 - limpar fila");
	printf("\n================================================\n\n");
	printf("\nSelecione uma opção: ");
}

int main(){
	setlocale(LC_ALL,"Portuguese_Brazil");
	int opcao = 0;
	
	printf("Bem vindo ao programa de manipulação de fila (queue) :D");
	startQueue();
	
	do{
		options();
		scanf("%d", &opcao);
		switch(opcao){
			case 0:
				printf("\nEncerrando o programa!");
				break;
			case 1:
				showQueue();
				break;
			case 2:
				enqueue();
				break;
			case 3:
				dequeue();
				break;
			case 4:
				peek();
				break;
			case 5:
				queueSize();
				break;
			case 6:
				updateFront();
				break;
			case 7:
				queueSearch();
				break;
			case 8:
				queueClean();
				break;
			default:
				printf("\nERRO: opcao invalida selecionada!");
		} 
	} while(opcao != 0);
}

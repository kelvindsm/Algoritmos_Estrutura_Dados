#include <stdio.h>
#define size 4
int rear;
int staticQueue[size];

void startQueue(){
	rear = -1;
}

int isEmpty(){
	if(rear == - 1){
		printf("\nLista vazia!"); // duplica na saida, corrigir depois! (verificar de ha mais duplicados)
		return 1;
	} else {
		return 0;
	}
}
int isFull(){
	if(rear == size - 1){
		printf("\nLista cheia!\n");
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
		for(int i = 0; i < rear; i++){
			printf("%d; ", staticQueue[i]);
		}
	}
}
void dequeue(){
	if (isEmpty()) 
		return;
	
	printf("\nRemovido da fila: %d\n", staticQueue[0]);
	for(int i = 0; i < rear; i++){
		staticQueue[i] = staticQueue[i + 1];
	}
	rear--;
}
void peek(){
	printf("\nPrimeiro elemento da fila: %d", staticQueue[0]);
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

int main(){
	startQueue();
	isEmpty();
	enqueue();
	enqueue();
	enqueue();
	enqueue();
	isFull();
	showQueue();
	dequeue();
	showQueue();
	peek();
	queueSize();
	updateFront();
	queueClean();
	showQueue();
}


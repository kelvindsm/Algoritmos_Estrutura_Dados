#include <stdio.h>
#include <stdbool.h>
#define tam 4
int stack[tam];
int top = -1;

void pop(){
	printf("\nValor Removido: %d", stack[top]);
	stack[top] = 0;
	top--;
}

void showTop(){
	printf("\nTopo da pilha: %d", stack[top]);
}

int isEmpty(){
	if (top == -1){
		return true;
	} else {
		return false;
	}
}

int isFull(){
	if (top == 3){
		return true;
	} else {
		return false;
	}
}

void push(){
	int valor;

	if(isFull()){
		printf("\nLista cheia, nao adicione mais itens!");
	} else {
		printf("\nDigite um valor: ");
		scanf("%d", &valor);
		top++;
		stack[top] = valor;
		printf("Inserido: %d\n", valor);
	}
}

void showStack(){
	if(isEmpty()){
		printf("\n\nNenhum valor encontrado :(");
	} else {
		printf("\n\nValores da Pilha: ");
		for(int i = 0; i <= top; i++){
			printf("%d; ", stack[i]);
		}
	}
}

void updateTop(int att){
	stack[top] = att;
}

void showStackVertical(){
	printf("\n\nValores da Pilha (vertical): ");
	for(int i = 0; i <= top; i++){
		printf("\n%d;", stack[i]);
	}
}

int main(){
	showStack();
	printf("\nDigite os valores para a pilha: \n");
	push();
	push();
	push();
	push();
	push();
	showStack();
	showTop();
	pop();
	pop();
	showStack();
	updateTop(8);
	showTop();
	showStack();
	showStackVertical();
}

#include <stdio.h>
#define tam 9
int stack[tam];
int top = -1;

void push(){
	int valor;
	
	if(top == 8){
		printf("\nLista cheia");
	} else {
		printf("\nDigite um valor: ");
		scanf("%d", &valor);
		top++;
		stack[top] = valor;
		printf("\nValor inserido: %d\n", valor);
	}
}

void showStack(){
	if(top == -1){
		printf("\n\nNenhum valor encontrado :(");
	} else {
		printf("\n\nValores da Pilha: ");
		for(int i = 0; i <= top; i++){
			printf("%d; ", stack[i]);
		}
	}
}

int main(){
	
	showStack();
	push();
	push();
	push();
	push();
	push();
	push();
	push();
	push();
	push();
	push();
	showStack();
}

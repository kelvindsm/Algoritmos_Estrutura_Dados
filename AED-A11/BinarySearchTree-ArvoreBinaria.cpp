#include <stdio.h>
#include <stdbool.h>
#define size 7
#define vazio -1

int arvore[size];

void inicializar(){
	for(int i = 0; i < size; i++){
		arvore[i] = vazio;
	}
}

bool isEmpty(){
	if(arvore[0] == vazio){
		printf("\nArvore vazia!\n");
		return true;
	}
	return false;
}

bool isFull(){
	
	for(int i = 0; i < size; i++){
		if(arvore[i] == vazio){
			return false;
		}
	}
	printf("\nArvore cheia!\n");
	return true;
}

void imprimirArvore(){
	if(isEmpty()){
		return;
	}
	
	for(int i = 0; i < size; i++){
		printf("%d ", arvore[i]);
	}
	/*
	for(int i = 0; i < size; i++){
		if(arvore[i] != vazio){
			printf("%d ", arvore[i]);
		} else {
			printf("-");
		}
	}*/
	printf("\n");
}

void inserirValor(int valor){

	if(isFull())
		return;
	
	int i = 0;
	
	while(i < size){
		if (arvore[i] == vazio){
			arvore[i] = valor;
			printf("Inserido %d no indice %d\n", valor, i);
			return;
		}
		if (valor == arvore[i]) {
            printf("Valor ja existe na arvore.\n");
            return;
        }
		if(valor < arvore[i]){
			i = 2 * i + 1;
		} else {
			i = 2 * i + 2;
		}
	}
	printf("\nSem espaco para inserir!\n");
}

int main(){
	inicializar();
	isEmpty();
	imprimirArvore();
	isFull();
	inserirValor(40);
	imprimirArvore();
	inserirValor(20);
	imprimirArvore();
	inserirValor(60);
	imprimirArvore();
	inserirValor(10);
	imprimirArvore();
	inserirValor(30);
	imprimirArvore();
	inserirValor(50);
	imprimirArvore();
	inserirValor(70);
	imprimirArvore();
}

#include <stdio.h>
#define N 5
int grafo[N][N];

void inicializarGrafo(){
	
	for(int i = 0; i < N; i++){
		for(int j = 0; j < N; j++){
			grafo[i][j] = 0;
		}
	}
}

void preencherGrafo(){
	
	for(int i = 0; i < N; i++){
		for(int j = 0; j < N -1; j++){
			if(i != j){
				grafo[i][j] = 1;
			}
		}
	}
}

int isEmpty(){
	
	for(int i = 0; i < N; i++){
		for(int j = 0; j < N -1; j++){
			if(grafo[i][j] == 1){
				return 0;
			}
		}
	}
	printf("\nO grafo esta vazio!\n");
	return 1;
}

int isFull(){
	
	for(int i = 0; i < N; i++){
		for(int j = 0; j < N -1; j++){
			if(i != j && grafo[i][j] == 0){
				return 0;
			}
		}
	}
	printf("\nO grafo esta cheio!\n");
	return 1;
}

void mostrarGrafo(){
	
	printf("\n");
	for(int i = 0; i < N; i++){
		for(int j = 0; j < N; j++){
			printf("[%d]", grafo[i][j]);
		}
		printf("\n");
	}
}

void adicionarAresta(int origem, int destino){
	
	if(isFull()) return;
	
	if(origem < 0 || origem >= N || destino < 0 || destino >= N){
		printf("\nVertices invalidos!");
		return;
	}
	if(grafo[origem][destino] == 1){
		printf("\nVertice [%d][%d] ja adicionado!", origem, destino);
		return;
	}
	grafo[origem][destino] = 1;
	grafo[destino][origem] = 1;
	printf("\nAresta adicionada");
}

void existeAresta(int origem, int destino){
	
	if(isEmpty()) return;
	if(origem == destino){
		return;
	} 
	if(origem < 0 || origem >= N || destino < 0 || destino >= N){
		printf("\nVertices invalidos!");
		return;
	}
	
	if(grafo[origem][destino]){
		printf("\nExiste aresta entre %d e %d\n", origem, destino);
	} else {
		printf("\nNao existe aresta entre %d e %d\n", origem, destino);
	}
}

int main(){
	
	inicializarGrafo();
	mostrarGrafo();
	isEmpty();
	adicionarAresta(0, 1);
	mostrarGrafo();
	adicionarAresta(0, 1);
	existeAresta(0, 1);
}

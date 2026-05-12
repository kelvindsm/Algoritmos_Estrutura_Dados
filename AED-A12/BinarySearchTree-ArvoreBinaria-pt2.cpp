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
	printf("\n");
}

void inserirValor(int valor){

	if(isFull()) return;
	
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

int procurarValor(int procura){
	
	int i = 0;
	
	if(isEmpty()) return 0;
	
	while(i < size && arvore[i] != vazio){
		if(procura == arvore[i]){
			printf("\nEncontrou na posicao %d\n", i);
			return i;
		}
		if(procura < arvore[i]){
			i = 2 * i + 1; // filho esquerdo
		} else {
			i = 2 * i + 2; // filho direiro
		}
	}
	printf("\nValor nao encontrado\n");
	return -1;
}

void consultarValorPai(int procura){
	
	if(isEmpty()) return;
	
	int pos = procurarValor(procura);
	if(pos == -1){
		printf("\nValor inexistente na arvore");
	}
	if(pos == 0){
		printf("\nO no %d e a raiz e nao possui pai.", procura);
	}
	int pai = (pos - 1) / 2;
	printf("\nO pai de %d e %d", procura, arvore[pai]);
}

void filhosDoNo(int procura){
	
	if(isEmpty()) return;
	
	int pos = procurarValor(procura);
	
	int esquerda = 2 * pos + 1;
	int direita = 2 * pos + 2;
	
	printf("Filhos do no %d", procura);
	if(esquerda < size && arvore[esquerda] != vazio){
		printf("\nEsquerda %d", arvore[esquerda]);
	} else {
		printf("\nEsquerda: null");
	}
	if(direita < size && arvore[direita] != vazio){
		printf("\nDireita %d", arvore[direita]);
	} else {
		printf("\nDireita: null");
	}
}

int main(){
	inicializar();
	isEmpty();
	imprimirArvore();
	isFull();
	inserirValor(40);
	imprimirArvore();
	inserirValor(30);
	imprimirArvore();
	procurarValor(60);
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
	procurarValor(40);
	consultarValorPai(30);
}

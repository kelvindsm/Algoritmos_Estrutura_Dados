/*
1. Crie procedimento para mostrar o pai de um nó, consulta por índice

2. Crie procedimento para identificar o tipo de nó (raiz, interno ou folha)
  tipoNo: raiz: pos == 0, folha: sem filhos, interno: possui pelo menos 1 filho

3. Crie procedimento para encontrar o nível do nó, profundidade a partir da raiz

4. Crie procedimento para contar a quantidade de folhas na árvore

5. Crie o procedimento para limpar a árvore, deixar a árvore vazia

6. Dentro da função main, organize o programa e desenvolva um menu com todas as opções desenvolvidas na aula e inclua mensagem de erro.
*/

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

void paiDoNo(int posicao){
	
	if(posicao < 0 || posicao >= size){
		printf("\nERRO: indice invalido!");
		return;
	}
	if(arvore[posicao] == vazio){
		printf("\nERRO: indice vazio!");
		return;
	}
	if(posicao == 0){
		printf("\nO no do indice 0 nao possui pai (raiz da arvore)");
		return;
	}
	
	int pai = (posicao - 1) / 2;
	printf("\nO pai do no %d (indice %d) e o no %d (indice %d).\n", arvore[posicao], posicao, arvore[pai], pai);
}

void tipoDeNo(int posicao){
	
	if(posicao < 0 || posicao >= size){
		printf("\nERRO: indice invalido!");
		return;
	}
	if(arvore[posicao] == vazio){
		printf("\nERRO: indice vazio!");
		return;
	}
	if(posicao == 0){
		printf("\nO no do indice 0 nao possui pai (raiz da arvore)");
		return;
	}

	int esq = 2 * posicao + 1;
	int dir = 2 * posicao + 2;
	
	bool temFilhoEsq = (esq < size && arvore[esq] != vazio);
	bool temFilhoDir = (dir < size && arvore[dir] != vazio);
	
	if(!temFilhoEsq	&& !temFilhoDir){
		printf("\nO no no indice %d (valor %d) e uma FOLHA (nao possui filhos).", posicao, arvore[posicao]);
	} else {
		printf("\nO no no indice %d (valor %d) e um no INTEIRO.", posicao, arvore[posicao]);
	}
}

void nivelDoNo(int posicao){
	
	if(posicao < 0 || posicao >= size){
		printf("\nERRO: indice invalido!");
		return;
	}
	if(arvore[posicao] == vazio){
		printf("\nERRO: indice vazio!");
		return;
	}
	
	int nivel = 0;
	int atual = posicao;
	
	while(atual > 0){
		atual = (atual - 1) / 2;
		nivel++;
	}
	
	printf("\nO nivel do no no indice %d e: %d\n", posicao, nivel);
}

void contarFolhas(int posicao){
	
	if(isEmpty()) return;
	
	int totalFolhas = 0;
	for(int i = 0; i < size; i++){
		if(arvore[i] != vazio){
			int esq = 2 * i + 1;
			int dir = 2 * i + 2;
			bool semFilhoEsq = (esq >= size || arvore[esq] == vazio);
			bool semFilhoDir = (dir >= size || arvore[dir] == vazio);
			
			if(semFilhoEsq && semFilhoDir){
				totalFolhas++;
			}
		}
	}
	printf("\nA arvore possui %d folha(s).", totalFolhas);
}

void limpaArvore(){
	inicializar();
	printf("\nArvore limpa!");
}

int main(){
	
	inicializar();
	int valor = 0, select = 0;
	while(select != -1){
		printf("\n--------------------------------------------------\n");
		printf("Olá, bem vindo a manipulacao de arvore binaria :D\n");
		printf("selecione um valor para imprimir: ");
		printf("\n1 - Imprimir os valores da arvore");
		printf("\n2 - Inserir valores na árvore");
		printf("\n3 - Verificar se a arvore esta vazia");
		printf("\n4 - Verificar se a arvore esta cheia");
		printf("\n--------------------------------------------------\n\n");
		scanf("%d", &select);
			
		// inserir valores 50, 30, 70, 20, 40, 60, 80 (mais equilibrados)
		switch(select){
			case -1:
				printf("\nEncerrando o programa, ate mais :D !");
				break;
			case 1:
				imprimirArvore();
				break;
			case 2:
				printf("\nDigite um valor para ser inserido na arvore:");
				scanf("%d", &valor);
				inserirValor(valor);
				break;
			case 3:
				isEmpty();
				break;
			case 4:
				isFull();
				break;
			default:
				printf("\nValor inserido invalido, digite um valor valido!");
				break;
		}
	}
}

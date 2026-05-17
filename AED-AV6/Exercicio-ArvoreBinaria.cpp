/*
1.	Elabore um pequeno resumo sobre a teoria de static tree (árvore estática) com alocação estática e acesso sequencial.
	R: a teoria da arvore estatica baseia-se em representar uma estrutura hierarquica (arvore) utilizando vetor de tamanho fixo
	definido durante a compilacao, onde a relação pai-filho é calculada por formulas aritméticas. O acesso é sequencial, permitindo
	percursos ordenados atraves de indexação.
	A localização de nís filhos em relação a raiz é calculada da forma que:
	- valor maior que a raiz: nó da direita;
	- valor menor que a raiz: nó da esquerda.
	
2. 	Dentro da função main, organize o programa e desenvolva um menu com todas as opções desenvolvidas na aula e inclua mensagem de erro.
	(resposta apos o bloco de comentario).
	
3. 	Responda estas questões
	a. 	Explique o que é uma árvore binária de busca e qual é sua principal propriedade.
		R:	uma árvore binária é uma estrutura de dados hierárquica não linear, composta por nós, onde cada nó pai pode possuir 
			no máximo dois filhos, um à esquerda e outro à direita.
		
	b. 	Dada a sequência de inserção: 30, 20, 40, 10, 25
	Desenhe a árvore resultante.
	R.:		    30
			   /  \
			 20	   40
			/  \
		  10    25
	
c.	Na árvore abaixo, determine o grau de cada nó e o grau da árvore.
		        50 : grau 2;
		       /  \
	grau 0 : 30    70 : grau 1;
		          /
		        60 : grau 0.
        
d. 	Calcule a altura da árvore abaixo:
        10
          \
           20
             \
              30
        R: dois de altura
        
e. 	Determine o nível de cada nó:
	        15 : nivel 0;
	       /  \
	     10    20 : nivel 1;
	    /
	   5		  : nivel 2.
f. 	Explique como funciona o processo de busca em uma BST.
	R:	o processo de busca em uma arvore binaria consiste principalmente na comparação. Se um valor a ser buscado for maior que
		o da raíz, a busca vai para a direita, e, se for menor, a busca será direcionada para o nó da direita.
	
g. 	Insira os valores: 50, 30, 70, 20, 40, 60, 80
	Mostre a árvore final:
			50
		   /  \
		  30   70
		 /  \  /  \
		20  40 80  60
h. 	Classifique os nós em raiz, internos e folhas:
		        8		: raíz
		       / \
	  folha : 3   10	: nó
		         /
		        9		: folha
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

/*
3.	Acesse o material teórico utilizado nas aulas sobre algoritmos busca (pesquisa) linear ou sequencial 
	sem rotina e com dados não ordenados e realize estas alterações:
a. Faça um pequeno resumo dos conceitos e características do algoritmo de busca linear ou sequencial.
b. No main, crie um vetor vazio de oito posições para armazenar valores reais (float). 
c. Desenvolva uma estrutura de repetição para ler os valores para serem armazenados no vetor. 
d. Sem usar função desenvolva a lógica da busca sequencial com dados não ordenados.
e. Verifique e mostre quantas repetições foram realizados na pesquisa, use contador
f. Quando encontramos o valor pesquisado, como podemos melhorar o algoritmo de pesquisa.
g. No final, mostre todos os valores armazenados no vetor na vertical.
h. No final, mostre todos os valores armazenados no vetor na horizontal.
*/

/* RESPOSTAS
	R.a:O algorítmo de busca linear e sequencial é um dos algorítmos de busca mais simples. 
		Ele funciona de forma "natural" de busca, ou seja, ele percorre todos os lugares existentes para encontrar um valor. 
		Vantagens:
		- Este algorítmo não exige ordenação dos valores, funcionando com excelência em listas deordenadas; 
		- Tem um custo computacional barato, sendo o pior do cenário, a leitura completa da lista 
		  (o custo cresce proporcionalmente a quantidade de elementos existentes): 
		  	- melhor caso O(1): o valor buscado é o primeiro da lista; 
			- Médio caso O(1/2): busca normal; 
			- Pior cenário (n): o valor buscado é o ultimo da lista.
	R. f: Para melhorar o algorítimo de pesquisa, é necessário aplicar um "break" assim que o valor encontrado for localizado,
		  para que não haja a necessidade de repetição até o final da lista;
*/

#include <stdio.h>
#include <locale.h>
#define limit 8

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float busca, vetor[limit];
	int resultadoBusca, contador = 0;
	
	printf("\nDigite %d valores para serem armazenados: \n", limit);
	for(int i = 0; i < limit; i++){
		printf("Valor na posição %d: ", i);
		scanf("%f", &vetor[i]);
	}
	
	printf("\nDigite o numero que deseja encontrar: ");
	scanf("%f", &busca);
	resultadoBusca = -1;
	for(int j = 0; j < limit; j++){
		if(vetor[j] == busca){
			resultadoBusca = j;
			break;
		}
		contador++;
	}
	
	printf("\n=====================================\n");
	
	if(resultadoBusca == -1){
		printf("\nValor não encontrado... ");
	} else {
		printf("\nValor de busca encontrado na posição: %d\n", resultadoBusca);
	}
	
	printf("\nQuantidades de repetição para a busca: %d\n", contador);
	
	printf("\nValores na vertical: \n");
	for (int k = 0; k < limit; k++){
		printf("%.2f\n", vetor[k]);
	}
	
	printf("\nValores na horizontal: \n");
	for (int k = 0; k < limit; k++){
		printf("%.2f; ", vetor[k]);
	}
}

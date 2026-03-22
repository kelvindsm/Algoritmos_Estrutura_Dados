/* 2. 	Acesse o material utilizado nas aulas sobre algoritmos busca (pesquisa) binária com dados ordenados e sem função 
	e realize estas alterações:
	
	a. Crie um vetor vazio de doze posições para armazenar valores reais (float).
	b. Desenvolva uma estrutura de repetição para ler os valores reais (float) digitados pelo usuário que serem armazenados no vetor. 
		Digite os valores na ordem crescente.
	c. Sem usar função, desenvolva a lógica da busca binária com dados ordenados.
	d. Crie a variável contador para verificar e mostrar quantas repetições foram realizadas na pesquisa.
	e. Depois da pesquisa, mostre uma das mensagens:
		"Valor não encontrado."
		"Valor encontrado na posição (índice) x."
	f. No final, mostre todos os valores armazenados no vetor na horizontal.
	g. No final, mostre todos os valores armazenados no vetor na vertical.
	i. Teste o algoritmo com um valor existente no vetor e com um valor que não existe no vetor.
*/

#include <stdio.h>
#define limit 6

int main(){
	float vetor[6] = {1.2, 2.2, 3.2, 4.2, 5.2, 6.2}, busca = 0.0;
	int contador, inicio, meio, fim, encontrou;
	
	contador = 0;
	inicio = 0;
	meio = 0;
	encontrou = -1;
	fim = limit -1;
	
	printf("\nDigite o valor para buscar no vetor: ");
	scanf("%f", &busca);
	
	while(inicio <= fim){
		
		contador++;
		meio = (inicio + fim) / 2;
		if(busca < vetor[meio]){
			fim = meio - 1;
		} else if(busca > vetor[meio]){
			inicio = meio + 1;
		} else {
			encontrou = meio;
			break;
		}
	}
	
	if (encontrou == -1){
		printf("\nValor não encontrado");
	} else {
		printf("\nValor encontrado na posição: %d", encontrou);
	}
	
	printf("\nQuantidade de repetições durante a pesquisa: %d", contador);
	
	printf("\nValores na horizontal: \n");
	for(int j = 0; j < limit; j++){
		printf("%f; ", vetor[j]);
	}
	
	printf("\nValores na vertical: \n");
	for(int j = 0; j < limit; j++){
		printf("\n%f;", vetor[j]);
	}
}

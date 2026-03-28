/*
3. 	Acesse o material utilizado na aula sobre algoritmos ordenação e realize estas alterações:

a.	No main, crie um vetor vazio de cinco posições. E carregue o vetor usando atribuição, um valor por comando. 
	Use a sintaxe de vetor abaixo:
	Sintaxe: nomeVetor [posicao] = valor;

b.	Refaça a estrutura de dados Selection Sorte sem usar função, faça todo a lógica dentro da função main.

c.	No final dos algoritmos, mostre os valores do vetor na vertical.

d. 	E depois, mostre os valores do vetor na horizontal
*/

#include <stdio.h>
#include <locale.h>
#define limit 5

int main(){
	setlocale(LC_ALL, "Portuguese");
	int vetor[limit], menor, troca;
	
	printf("Digite cinco valor para a lista: ");
	for(int i = 0; i < limit; i++){
		printf("\nDigite o valor da posição %d: ", i);
		scanf("%d", &vetor[i]);
	}
	
	printf("\n\n===================================\n");
	
	printf("\nLista não ordenada: ");
	for(int i = 0; i < limit; i++){
		printf("%d; ", vetor[i]);
	}

	for(int k = 0; k < limit - 1; k++){
		menor = k;
		for(int j = k + 1; j < limit; j++){
			if(vetor[j] < vetor[menor]){
				menor = j;
			}
		}
		if(k != menor){
			troca = vetor[k];
			vetor[k] = vetor[menor];
			vetor[menor] = troca;
		}
	}
	
	printf("\n\nLista ordenada (verticalmente): ");
	for(int j = 0; j < limit; j++){
		printf("%d; ", vetor[j]);
	}
	
	printf("\n\nLista ordenada (horizontalmente): ");
	for(int j = 0; j < limit; j++){
		printf("\n%d; ", vetor[j]);
	}
}

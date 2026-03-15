/*
 2. Refaça o exercício anterior. 
- Crie o procedimento mostra vetor, ele recebe o endereço do vetor, 
	gera a tela de saída com o conteúdo do vetor e não retorna nada. Use variável local.
- Crie também a função soma vetor, ele recebe o endereço do vetor, 
	calcula a soma de todos os valores no vetor e retorna a soma dos valores.
- E desenvolva a função main para gerenciar todo o exercício.
*/

#include <stdio.h>
#include <locale.h>
#define limit 40

void MostrarVetor(int *vet){

	printf("\nValores do vetor (ponteiro): ");
	for(int i = 0; i < limit; i++){
		printf("%d; ", vet[i]);
	}
	printf("\n");
}

int SomaVetor(int vet[]){
	
	int soma = 0;
	for(int i = 0; i < limit; i++){
		soma = soma + vet[i];
	}
	return soma;
}

int main(){
	setlocale(LC_ALL, "Portuguese");
    
	int soma = 0, contador = 0, vetor[limit];
    
    printf("\nDigite %d numeros: \n", limit);
    for(int i = 0; i < limit; i++){
        printf("Número %d: ", i + 1);
        scanf("%d", &vetor[i]);
        if(vetor[i] > 20){
			contador++;
		}
    }
    
    printf("\n");
    MostrarVetor(vetor);
	
	printf("\nSoma entre os valores digitados: %d", SomaVetor(vetor));
	
	printf("\nQuantidade de valores maior que 20: %d", contador);
}

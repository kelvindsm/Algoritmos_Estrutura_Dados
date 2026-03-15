/* 1.Desenvolva o programa que leia quarenta valores inteiros digitados pelo usuário, armazene-os num vetor (array) 
e gere a tela de saída com as seguintes informações: 

Mostre todos os valores armazenados no vetor 
A soma de todos os valores do vetor.
A quantidade de valores maior que vinte.
- Obs.: para facilitar os testes de desenvolvimento, resolva com quatro valores
*/

#include <stdio.h>
#include <locale.h>
#define limit 40

int main(){
	setlocale(LC_ALL, "Portuguese");
    
	int soma = 0, contador = 0, vetor[limit];
    
    printf("\nDigite %d numeros: \n", limit);
    for(int i = 0; i < limit; i++){
        printf("Número %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }
    
    printf("\nValores digitados: ");
    for(int j = 0; j < limit; j++){
    	printf("%d; ", vetor[j]);
    	soma = soma + vetor[j];
    	if(vetor[j] > 20){
			contador++;
		}
	}
	
	printf("\nSoma entre os valores digitados: %d", soma);
	
	printf("\nQuantidade de valores maior que 20: %d", contador);
	
}

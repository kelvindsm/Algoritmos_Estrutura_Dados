#include <stdio.h>

int main (){
	
	int ct;
	float nota, soma, media;
	
	ct = 0;
	soma = 0;
	
	while (true){
		printf("Digite a nota do aluno: ");
		scanf("%f", &nota);
		
		if (nota == -1) {
			break;
		} else {
			soma = soma + nota;
			ct = ct + 1;	
		}
	}
	
	media = soma / ct;
	
	printf("\nQuantidade de alunos: %d", ct);
	printf("\nMedia = %.2f", media);
};

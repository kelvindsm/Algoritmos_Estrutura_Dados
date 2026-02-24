#include <stdio.h>

int main (){
	
	int i, f;
	printf("Digite o valor inicial da sequencia: ");
	scanf("%d", &i);
	printf("Digite o valor final da sequencia: ");
	scanf("%d", &f);
	
	if (i < f){
		printf("Sequencia crescente");
		for(int v = i; v <= f; v++){
			printf("\n%3d", v);
		}
	} else if (i > f){
		printf("Sequencia decrescente");
		for(int v = i; v >= f; v--){
			printf("\n%3d", v);
		}
	} else if (i = f){
		printf("Ai tu me complicou patraokkkkkkkkkkkkkkkkkkk");
	}
}

#include <stdio.h>

int main (){

	int ct_t = 0, ct_b = 0, ct_r = 0, produto;
	printf("\nDigite [1] para Tinto, [2] para Branco e [3] para Rose");
	
	do	{
		printf("\nDigite o codigo do vinho: ");
		scanf("%d", &produto);
		
		if (produto == 1){
			ct_t++;
		} else if(produto == 2){
			ct_b++;
		} else if (produto == 3){
			ct_r++;
		} else if (produto != 0){
			printf("\nNumero invalido, tente novamente!\n");
		};
	} while (produto != 0);
	
	printf("\nQuantidade de Tinto: %d", ct_t);
	printf("\nQuantidade de Branco: %d", ct_b);
	printf("\nQuantidade de rose: %d", ct_r);
}

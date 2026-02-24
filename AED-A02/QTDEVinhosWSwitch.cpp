#include <stdio.h>

int main (){

	int ct_t = 0, ct_b = 0, ct_r = 0, produto;
	printf("\nDigite [1] para Tinto, [2] para Branco e [3] para Rose");
	
	do	{
		printf("\nDigite o codigo do vinho: ");
		scanf("%d", &produto);
		
		switch(produto){
			case 0:
				break;
			case 1:
				ct_t++;
				break;
			case 2:
				ct_b++;
				break;
			case 3:
				ct_r++;
				break;
			default:
				printf("\nNumero invalido, tente novamente!\n");
				break;
		}
	} while (produto != 0);
	
	printf("\nQuantidades : Vinho tinto = %d | Vinho branco = %d | Vinho rose = %d", ct_t, ct_b, ct_r);
}

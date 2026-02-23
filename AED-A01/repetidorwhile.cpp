# include<stdio.h>

int main (){
	
	float valor;
	int count;
	count = 0;
	
	while (true){
		printf ("Digite um valor: ");
		scanf ("%f", &valor);
		if (valor == -1){
			break;
		}
		count++;
	};
	
	printf ("\nQuantidade de valores: %d", count);
}

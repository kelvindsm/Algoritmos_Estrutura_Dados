# include<stdio.h>

int main (){
	
	float valor;
	
	printf ("Digite um valor: ");
	scanf ("%f", &valor);
	
	if (valor < 0 ) {
		printf ("Negativo");
	} else if (valor > 0){
		printf ("Positivo");
	} else {
		printf ("Nulo");
	};
};

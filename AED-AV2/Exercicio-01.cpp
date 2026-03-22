/* 1. 	Baseado no material teórico (os slides) utilizados nas aulas sobre algoritmos de busca (pesquisa) binária, 
	faça um resumo dos conceitos do funcionamento do algoritmo de pesquisa (busca) binária com dados ordenados.*/
	
/*
	1.R: O algoritmo de busca binária é uma forma de busca para dados ordenados que divide o vetor de busca pela metede, 
		assim que um valor próximo ao valor de busca é encontrado ("Dividir para conquistar").
		O mecanismo de busca funciona da seguinte forma: Primeiramente é feita uma operação matemática, o índice faz uma soma entre 
		a posição inícial com a posição final do array, em seguida, divide o resultado da soma por 2. Este valor indica a posição meio do array.
		Com este valor de 'posição do meio', o elemento procurado é comparado com o valor na posição do meio do array:
			- Se o elemento procurado for menor que o elemento do meio do vetor: A nova posição (indice fim) será "posição do meio - 1" 
				ou: fim = meio -1;
			- Se o elemento procurado for maior que o elemento do meio do vetor: A nova posição (indice inicio) será "posição do meio + 1" 
				ou: incio = meio + 1;
			- Se o elemento procurado for igual ao elemento do meio do vetor: o valor é encontrado e a pesquisa finaliza.
			
		Logo:
			- Se o valor procurado for igual ao valor da posição do meio do array: o algorítmo retorna o valor do meio array;
			- Se o valor for diferente: o processo de busca continua enquanto o indice do inicio for menor ou igual ao índice do final;
			- Se o valor do inicio for maior que o indice do final: a busca termina e o algorítmo retorna -1, indicando que o elemento não existe no array.
*/

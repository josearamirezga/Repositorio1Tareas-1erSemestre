// Logre que no salga negativos, utiliza ciclos, es tardado y unicamente llega con tiempo de 20 segundos a 45.

#include <stdio.h>

int fibonacci (int num){
	
	if(num == 0){
		return 0;
	} else if(num == 1){
		return 1; 
	} else {
		return (fibonacci(num-1) + fibonacci(num-2));
	}
}

int main(){
	int Num;
	
	printf("Numero de elementos de la serie de Fibonacci: \n");
	scanf("%d", &Num);
	
	printf("La serie de fibonacci es:");
	
	for (int i = 0; i < Num; i++){
		
		printf("%d   ", fibonacci (i));
	
	}
	return 0;
}

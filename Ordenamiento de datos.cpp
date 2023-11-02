// Ordenamiento por inserción.
// El ordenamiento por inserción. Funciona como en una baraja, ves de la izquierda a la derecha, tomando el primer elemento del arreglo como referencia
// Luego, tomas el siguiente valor. Si el siguiente valor es menor al primero, los cambias
// Luego tomas el siguiente, y lo pasas poco a poco, hasta que ya no sea menor que todos los valores

	
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int CrearArreglo(int Arreglo[5], int TamArreglo, int MaxRand){
	
	for (int i = 0; i < TamArreglo; i++){
		
		Arreglo[i] = rand()%MaxRand + 1;
	}
}

int ImprimirArreglo(int Arreglo[5], int TamArreglo){
	
	for (int i = 0; i < TamArreglo; i++){
		
		printf("%d   ", Arreglo[i]);
	}
}

int Insertion(int Arreglo[5], int TamArreglo){
	
	for(int i = 0; i < TamArreglo; i++){
		
		int NumActual = Arreglo[i];
		int posAnterior = i - 1;
		
		while (posAnterior >= 0 && Arreglo[posAnterior] > NumActual){
			
			Arreglo[posAnterior + 1] = Arreglo[posAnterior];
			posAnterior --;
			
		}
		Arreglo[posAnterior + 1] = NumActual;
	}
	
	printf("\n Elemento menor: %d \n Elemento mayor: %d \n",Arreglo[0],Arreglo[TamArreglo-1]);
}

int Frecuencia(int Arreglo_Ordenado[5],int MAXRAND,int AUX[5]){
	int j = 0;
	
	for (int i = 0; i < MAXRAND;i++){
		int Cuenta = 0;
		
		while(Arreglo_Ordenado[j] == i+1){
			
			Cuenta++;
			j++;
		}
		AUX[i] = Cuenta;
	}
}


int Find_MAX (int Arreglo[5], int TamArreglo){
	
	int AUX = -1000000;
	int INDEX = -1;
	
	for (int i = 0; i < TamArreglo; i++){
		
		if (AUX < Arreglo[i]){
			AUX = Arreglo[i];
			INDEX = i;
		}
	}
	return INDEX;
}

float Media(int Arreglo[5], int TamArreglo){
	float suma = 0;
	for (int i = 0; i < TamArreglo; i++){
		
		suma += Arreglo[i];
		
	}
	
	float med = suma/TamArreglo;
	return med;
}

float Mediana(int Arreglo[5], int TamArreglo){
	
	int Flag = TamArreglo % 2;
	switch(Flag){
		
		case 0:
			return ((Arreglo[(TamArreglo/2) - 1] + Arreglo[(TamArreglo/2)])/2.0);
			break;
		case 1:
			return (Arreglo[TamArreglo/2]);
			break;
		default:
			return 0;
			break;
		
	}
	
}

int Create_Histogram(int Frequence[5], int TamArreglo, int Data){
	
	for (int i = 0; i < TamArreglo; i++){
		int N = 0;
		N = Frequence[i] * (1/Data) * 1.0;
		int Probabilidad = 100 * N;
		
		printf("%d  :   ", i);
		
		for (int j = 0; j < Probabilidad; j++){
			
			printf("*");
			
		}
		printf("\n");
	}
	
}

int main(){
	srand(time(NULL));
	int MaxRand = 30;
	int Num = 0, Probabilidad[MaxRand];
	
	printf("Escribe la cantidad de elementos N que quieres que tenga el arreglo: \n ");
	
	scanf("%d", &Num);
	int Arreglo[Num];
	
	CrearArreglo(Arreglo,Num, MaxRand);
	printf("El arreglo desordenado es: \n");
	ImprimirArreglo(Arreglo, Num);
	
	printf("\n");
	
	printf("El arreglo ordenado es: \n");
	Insertion(Arreglo, Num);
	ImprimirArreglo(Arreglo, Num);
	
	printf("\n");
	
	printf("La frecuencia del arreglo ordenado es: \n");
	Frecuencia(Arreglo, MaxRand, Probabilidad);
	ImprimirArreglo(Probabilidad, MaxRand);
	
	printf ("La media, mediana y moda de los datos son:\n media: %.2f \n mediana: %.2f \n N moda: %d \n", Media(Arreglo, Num),Mediana(Arreglo, Num), Find_MAX(Probabilidad, MaxRand)+1);
	
	Create_Histogram(Probabilidad, MaxRand, Num);
	
	return 0; 
}

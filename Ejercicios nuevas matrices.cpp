
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define COLUMNAS 7

void CrearMatriz(int Matriz[][COLUMNAS], int RENG){
	
	for (int i = 0; i < RENG; i++){
		
		for (int j = 0; j <COLUMNAS; j++){
			
			int random = rand()% 10;
			
			Matriz[i][j] = random;
			
	 }
	}
}

void PrintMatriz(int Matriz[][COLUMNAS], int RENG){
	
	for (int i = 0; i < RENG; i++){
		
		for (int j = 0; j < COLUMNAS; j++){
			
			printf("%d  ", Matriz[i][j]);
			
		}
		printf("\n");
	}
	printf("\n");
}

int SUM_DIAG(int Matriz[][COLUMNAS], int RENG){
	
	int SUMADIAG = 0;
	
	for (int i = 0; i < RENG; i++){
		
		SUMADIAG = SUMADIAG + Matriz[i][i];
		
	}
	return SUMADIAG;	
}

int SUM_VERTICAL(int Matriz[][COLUMNAS], int RENG, int Columna){
	
	int SUMAVERTICAL = 0;
	for (int i = 0; i < RENG; i++){
		
		SUMAVERTICAL = SUMAVERTICAL + Matriz[i][Columna];
		
	}
	
	return SUMAVERTICAL;
}

int SUM_HORIZONTAL(int Matriz[][COLUMNAS] ,int Renglon){
	
	int SUMAHORIZONTAL = 0;
	for (int i = 0; i < COLUMNAS; i++){
		
		SUMAHORIZONTAL = SUMAHORIZONTAL + Matriz[Renglon][i];
		
	}
	return SUMAHORIZONTAL;
}

int SUM_TRIANGULAR_SUP(int Matriz[][COLUMNAS], int RENG){
	
	int SUMTRI = 0;
	
	for (int i = 0 ; i < RENG; i++){
		
		for (int j = 0; j < COLUMNAS; j++){
			
			if (j > i){
				
				SUMTRI = SUMTRI + Matriz[i][j];
				
			}
			
		}
		
	}
	
	return SUMTRI;
	
}
int SUM_TRIANGULAR_INF(int Matriz[][COLUMNAS], int RENG){
	
	int SUMTRI = 0;
	
	for (int i = 0 ; i < RENG; i++){
		
		for (int j = 0; j < COLUMNAS; j++){
			
			if (j < i){
				
				SUMTRI = SUMTRI + Matriz[i][j];
				
			}
			
		}
		
	}
	
	return SUMTRI;
	
}

int main(){
	int RENGLONES = 5;
	int SUMADIAGONAL = 0, SUMA_FILA = 0, SUMA_COL = 0;
	
	int RENGLON = 0, COLUMNA = 0;
	// PARES E IMPARES
	
	srand(time(NULL));
	
	int MATRIX[RENGLONES][COLUMNAS];
	CrearMatriz(MATRIX, RENGLONES);
	PrintMatriz(MATRIX, RENGLONES);
	
	printf("\n----------\n");
	
	SUMADIAGONAL = SUM_DIAG(MATRIX, RENGLONES);
	printf("La suma diagonal = %d\n", SUMADIAGONAL);
	
	// SUMA DE LA ULTIMA COLUMNA
	
	SUMA_COL = SUM_VERTICAL(MATRIX, RENGLONES, COLUMNAS-1);
	printf("Suma de la COLUMNA %d = %d\n", COLUMNAS, SUMA_COL);
	
	// SUMA DE LA PRIMERA FILA
	
	SUMA_FILA = SUM_HORIZONTAL(MATRIX, 0);
	printf("Suma del RENGLON %d = %d\n", 1,SUMA_FILA);
	
	printf("\n----------\n");
	
	// PARA AUXILIAR
	
	int SUMA_AUX = 0;
	
	// SUMA DE FILAS PARES
	
	for (int i = 0; i < RENGLONES; i++){
		int FLAG = (i + 1) % 2;
		
		if (FLAG == 1){
			
			SUMA_FILA = 0;
			SUMA_FILA = SUM_HORIZONTAL(MATRIX, i);
			printf("Suma de la FILA %d = %d \n",i + 1, SUMA_FILA);
			
			SUMA_AUX = SUMA_AUX + SUMA_FILA;
			
		}
	}
	
	printf("La suma de todas las FILAS impares: %d \n", SUMA_AUX);
	
	printf("\n----------\n");
	
	// SUMA DE COLUMNAS IMPARES
	
	SUMA_AUX = 0;
	
	for (int i = 0; i < COLUMNAS; i++){
		int FLAG = (i + 1) % 2;
		
		if (FLAG == 0){
			
			SUMA_COL = 0;
			SUMA_COL = SUM_VERTICAL(MATRIX, RENGLONES, i);
			printf("Suma de la COLUMNA %d = %d \n",i + 1, SUMA_COL);
			
			SUMA_AUX = SUMA_AUX + SUMA_COL;
			
		}
	}
	
	printf("La suma de todas los COLUMNAS pares: %d \n", SUMA_AUX);
	
	printf("\n----------\n");
	
	int SUMA_TRIAN = 0;
	SUMA_TRIAN = SUM_TRIANGULAR_SUP(MATRIX, RENGLONES);
	printf("La suma triangular superior = %d\n", SUMA_TRIAN);
	printf("La suma diagonal = %d\n", SUMADIAGONAL);
	printf("\n----------\n");
	
	SUMA_TRIAN = SUM_TRIANGULAR_INF(MATRIX, RENGLONES);
	
	printf("La suma triangular inferior = %d\n", SUMA_TRIAN);
	printf("La suma diagonal = %d\n", SUMADIAGONAL);
	printf("\n----------\n");
	
	return 0;
}

#include <stdio.h>

#define SIZE 3

void GETUSER_MATRIX(int Matriz[SIZE][SIZE]){
	
	for (int i = 0; i < SIZE; i++){
		
		for (int j = 0; j < SIZE; j++){
			
			
			
			int NUM = 0;
			scanf("%d", &NUM);
			
			Matriz[i][j] = NUM;
			printf("Matriz[%d][%d] = %d\n", i, j, Matriz[i][j]);
			
		}
	}
}

void PrintMatriz(int Matriz[SIZE][SIZE]){
	
	for (int i = 0; i < SIZE; i++){
		
		for (int j = 0; j < SIZE; j++){
			
			printf("%d  ", Matriz[i][j]);
			
		}
		printf("\n");
	}
	printf("\n");
}

int SUMA_DIAG_SECUNDARIA(int Matriz[SIZE][SIZE]){
	int SUMADIAG = 0;
	for (int i = 0; i < SIZE; i++){
		
		int OPP_I = (SIZE - i)-1;
		
			SUMADIAG = SUMADIAG + Matriz[OPP_I][i];
		
	}
	return SUMADIAG;
}

int SUM_DIAG(int Matriz[SIZE][SIZE]){
	
	int SUMADIAG = 0;
	for (int i = 0; i < SIZE; i++){
		
		SUMADIAG = SUMADIAG + Matriz[i][i];
	}
	return SUMADIAG;	
}

int SUM_VERTICAL(int Matriz[SIZE][SIZE],int Columna ){
	
	int SUMAVERTICAL = 0;
	for (int i = 0; i < SIZE; i++){
		
		SUMAVERTICAL = SUMAVERTICAL + Matriz[i][Columna];
		
	 }
	return SUMAVERTICAL;
}

int SUM_HORIZONTAL(int Matriz[SIZE][SIZE] ,int Renglon){
	int SUMAHORIZONTAL = 0;
	for (int i = 0; i < SIZE; i++){
		SUMAHORIZONTAL = SUMAHORIZONTAL + Matriz[Renglon][i];
		
	}
	return SUMAHORIZONTAL;
}


int main(){
	
	int MATRIX[SIZE][SIZE];
	printf("Escribe los valores de la matriz: \n");
	
	GETUSER_MATRIX(MATRIX);
	PrintMatriz(MATRIX);
	
	int DIAG = SUM_DIAG(MATRIX);
	int DIAGSEC = SUMA_DIAG_SECUNDARIA(MATRIX);
	printf("%d \n", DIAGSEC);
	
	int FLAG = 0;
	int BASE = DIAG;
	
	printf("DIAGONAL = %d, DIAGONAL SECUNDARIA = %d", DIAG, DIAGSEC);
	printf("\n");
	
	if (BASE != DIAGSEC){
		
		FLAG = -1;
		
	}
	
	int SUMA_AUX = 0;
	
	for (int i = 0; i < SIZE; i++){
		SUMA_AUX = SUM_HORIZONTAL(MATRIX, i);
		printf("SUMA DE LA FILA: %d = %d\n", i+1, SUMA_AUX);
		if (BASE != SUMA_AUX){
			
			FLAG = -1;
			
		}
	}
	printf("\n");
	for (int i = 0; i < SIZE; i++){
		SUMA_AUX = SUM_VERTICAL(MATRIX, i);
		printf("SUMA DE LA COLUMNA: %d = %d\n", i+1, SUMA_AUX);
		if (BASE != SUMA_AUX){
			
			FLAG = -1;
			
		}
	}
	
	switch(FLAG){
		
		case -1:
			
			printf("La MATRIZ NO es mágica");
			break;
		case 0:
			
			printf("La MATRIZ es magica");
			break;
		default:
			
			printf("como?");
			break;
	}
	return 0;
}


#include <stdio.h>
#include <unistd.h> // (incluye la funci�n "usleep")

int main (){ // int significa entero, es decir que la funci�n int. main va a retornar un entero
	char letras[] = "Hola, mundo!"; // Se declara un "Array" sin index o especificaci�n del index
	int Atraso = 1000; // Tiempo entre cada letra.
	for (int i = 0; letras[i] != '\0'; i++) { // For loop
		putchar(letras[i]); // Establecer las letras segun el index del bucle.
		fflush(stdout); // Aclarar el buffer. 
		usleep(Atraso); // Tiempo de atraso 
	}
	putchar('\n'); // Crear un espacio para el siguiente renglon
	return 0; //Retornar 0
}


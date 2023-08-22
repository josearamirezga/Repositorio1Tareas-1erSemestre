	// Tarea: realizar un programa de conversion de temperadtura de grados cellcius a grados farenheit, donde:
	// farenheit = (9/5)*celcius + 32
	// farenheit = (farenheit - 32) * (5/9)

#include <stdio.h>
#include <unistd.h>
#include <locale.h>
#include <string.h> 

#define GradeTrans1 1.8
#define GradeOffset 32

// la funcion se puede declarar en vez: farenheit = (farenheit - 32)/(9/5)

// 	scanf("%d",&Celcius);

int StringPrint(char StringArg[], int length, float delay) {
    for (int I = 0; I < length; I++) {
    	printf("%c",StringArg[I]);
    	
        usleep(delay);
    }
    return 0;
}

float ConvertCel (float Celcius){
	float CelciusToFarenheit = ((GradeTrans1 * Celcius) + GradeOffset);
	return CelciusToFarenheit;
}

float ConvertFarenheit (float Farenheit){
	float FarenheitToCelcius = (Farenheit - GradeOffset) / GradeTrans1;
	return FarenheitToCelcius;
}

int UserInputService (char UserChoice[], float Delay){
	if (strcmp(UserChoice, "c") == 0) {  // Compare strings using strcmp
		float InputCelcius;
		
		char ChoiceCelcius [] = "\n Elegiste convertir grados Celcius a Farenheit. \nPorfavor, escriba la temperatura en grados Celcius: ";
		int Leng2 = sizeof(ChoiceCelcius) - 1;
		
		StringPrint(ChoiceCelcius, Leng2, Delay);
		scanf(" %f", &InputCelcius);
		
		float ConversionC = ConvertCel (InputCelcius);
		printf("\nEl resultado de su conversion es el siguiente: %f, tome nota del resultado.\n",ConversionC);
	} else if (strcmp(UserChoice, "f") == 0){
		float InputFarenheit;
		
		char ChoiceFarenheit [] = "\n Elegiste convertir grados Farenheit a Celcius. \nPorfavor, escriba la temperatura en grados Farenheit: ";
		int Leng2 = sizeof(ChoiceFarenheit) - 1;
		
		StringPrint (ChoiceFarenheit, Leng2, Delay);
		scanf(" %f", &InputFarenheit);
		
		float ConversionF = ConvertFarenheit (InputFarenheit);
		
		printf("\nEl resultado de su conversion es el siguiente: %f, tome nota del resultado.\n",ConversionF);
		
	}
}

int main() {
    setlocale(LC_ALL, "Spanish");
    float LDelay = 1000;

    while (1) {
        char InputChoice[10];

        char TypeInput[] = "\nEscribe C si deseas convertir grados Celcius a Farenheit \nEscribe F si deseas convertir grados Farenheit a Celcius \nEscribe E si quieres salir del programa \n Input aqui:";
        int Leng1 = sizeof(TypeInput) - 1;  // Subtraer 1 para excluir el terminador null 

        StringPrint(TypeInput, Leng1, LDelay);
        scanf(" %c", &InputChoice);
        
        while (getchar() != '\n'); // Limpia el buffer
        
        UserInputService (InputChoice, LDelay);
        
        if (strcmp(InputChoice, "e") == 0) {
        	
        	return 0;
        }
    }

    return 0;
}

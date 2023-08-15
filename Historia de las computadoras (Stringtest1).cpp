#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <iostream>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Spanish");	
    char strings[7][1000] = {
        "\t\t Historia de las generaciones computacionales",
        "\n \tPrimera generaci�n (1940-1950): \n\nCaracterizada por los tubos de vac�o para los circuitos. \nM�quinas grandes y voluminosas que consum�an mucha energ�a. \nVelocidad de c�lculo y capacidad de memoria limitadas. \nUtilizadas para c�lculos cient�ficos, aplicaciones militares y \nprocesamiento de datos empresariales. \nEjemplos: ENIAC, UNIVAC I, EDSAC, EDVAC.",
        "\n \tSegunda generaci�n (d�cadas de 1950-1960): \n\nIntroducci�n de los transistores, m�s peque�os y fiables que los \ntubos de vac�o. \nLenguaje ensamblador y primeros lenguajes de alto nivel. \nProcesamiento por lotes y primeros sistemas operativos. \nMemoria magn�tica para mejorar el almacenamiento de datos. \nEjemplos: IBM 1401, IBM 7090, UNIVAC II.",
        "\n \tTercera generaci�n (1960-1970): \n\nLos circuitos integrados (CI) permitieron incluir m�s componentes en un solo chip. \nSe generalizan los lenguajes de programaci�n de alto nivel (FORTRAN, COBOL, etc.). \nSistemas operativos de tiempo compartido y multiprogramaci�n. \nLos miniordenadores y los mainframes se hicieron m�s accesibles. \nEjemplos: IBM System/360, DEC PDP-8.",
        "\n \tCuarta generaci�n (1970-1980): \n\nIntroducci�n de los microprocesadores (CPU de un solo chip). \nSe popularizan los ordenadores personales (PC). \nInterfaces gr�ficas de usuario (GUI) y software m�s f�cil de usar. \nCreaci�n de redes y aparici�n de Internet. \nEjemplos: Apple II, IBM PC, Commodore 64.",
        "\n \tQuinta generaci�n (de 1980 a la actualidad): \n\nAvances en la tecnolog�a de microprocesadores, incluidas las arquitecturas RISC. \nProcesamiento paralelo y superordenadores. \nIntroducci�n de la inteligencia artificial (IA) y los sistemas expertos. \nInform�tica multimedia e interfaces de usuario mejoradas. \nEjemplos: Cray-2, IBM.",
        "\n \tSexta generaci�n (actual y posterior): \n\nCentrada en el procesamiento paralelo avanzado, la computaci�n cu�ntica y la IA. \nMiniaturizaci�n y mejora continuas de la tecnolog�a de semiconductores. \nMayor integraci�n de los ordenadores en los dispositivos cotidianos (Internet de las cosas, IoT). \nAvances continuos en IA, aprendizaje autom�tico y procesamiento del lenguaje natural. \nEstas generaciones representan hitos en la evoluci�n de los ordenadores, y cada generaci�n se basa en \n las innovaciones de las anteriores. El campo de la inform�tica sigue evolucionando r�pidamente, \ndando lugar a nuevas tecnolog�as y capacidades que configuran diversos aspectos de nuestras vidas."
   };

    int TamanoString = sizeof(strings) / sizeof(strings[0]);
    	// int sizeofstring0 = sizeof(strings[0]);
    	// printf("%d", TamanoString);
    int Atraso = 1000; //

    for (int IdString = 0; IdString < TamanoString; IdString++) {
        for (int IdLetra = 0; IdLetra < strlen(strings[IdString]); IdLetra++) {
            putchar(strings[IdString][IdLetra]);
            fflush(stdout); // Vaciar el buffer de escritura en el archivo especificado
            usleep(Atraso); // Atrasarse por el tiempo especificado de la variable
        }
        putchar('\n'); // Crear una nueva linea cada nueva String
    }

    return 0;
}

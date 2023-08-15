#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <iostream>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Spanish");	
    char strings[7][1000] = {
        "\t\t Historia de las generaciones computacionales",
        "\n \tPrimera generación (1940-1950): \n\nCaracterizada por los tubos de vacío para los circuitos. \nMáquinas grandes y voluminosas que consumían mucha energía. \nVelocidad de cálculo y capacidad de memoria limitadas. \nUtilizadas para cálculos científicos, aplicaciones militares y \nprocesamiento de datos empresariales. \nEjemplos: ENIAC, UNIVAC I, EDSAC, EDVAC.",
        "\n \tSegunda generación (décadas de 1950-1960): \n\nIntroducción de los transistores, más pequeños y fiables que los \ntubos de vacío. \nLenguaje ensamblador y primeros lenguajes de alto nivel. \nProcesamiento por lotes y primeros sistemas operativos. \nMemoria magnética para mejorar el almacenamiento de datos. \nEjemplos: IBM 1401, IBM 7090, UNIVAC II.",
        "\n \tTercera generación (1960-1970): \n\nLos circuitos integrados (CI) permitieron incluir más componentes en un solo chip. \nSe generalizan los lenguajes de programación de alto nivel (FORTRAN, COBOL, etc.). \nSistemas operativos de tiempo compartido y multiprogramación. \nLos miniordenadores y los mainframes se hicieron más accesibles. \nEjemplos: IBM System/360, DEC PDP-8.",
        "\n \tCuarta generación (1970-1980): \n\nIntroducción de los microprocesadores (CPU de un solo chip). \nSe popularizan los ordenadores personales (PC). \nInterfaces gráficas de usuario (GUI) y software más fácil de usar. \nCreación de redes y aparición de Internet. \nEjemplos: Apple II, IBM PC, Commodore 64.",
        "\n \tQuinta generación (de 1980 a la actualidad): \n\nAvances en la tecnología de microprocesadores, incluidas las arquitecturas RISC. \nProcesamiento paralelo y superordenadores. \nIntroducción de la inteligencia artificial (IA) y los sistemas expertos. \nInformática multimedia e interfaces de usuario mejoradas. \nEjemplos: Cray-2, IBM.",
        "\n \tSexta generación (actual y posterior): \n\nCentrada en el procesamiento paralelo avanzado, la computación cuántica y la IA. \nMiniaturización y mejora continuas de la tecnología de semiconductores. \nMayor integración de los ordenadores en los dispositivos cotidianos (Internet de las cosas, IoT). \nAvances continuos en IA, aprendizaje automático y procesamiento del lenguaje natural. \nEstas generaciones representan hitos en la evolución de los ordenadores, y cada generación se basa en \n las innovaciones de las anteriores. El campo de la informática sigue evolucionando rápidamente, \ndando lugar a nuevas tecnologías y capacidades que configuran diversos aspectos de nuestras vidas."
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

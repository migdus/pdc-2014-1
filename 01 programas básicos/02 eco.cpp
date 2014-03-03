/*
Autor: Miguel Dussán
*/

/*
Este programa pide una cadena de caracteres y luego la muestra en pantalla
*/

#include <iostream> //Biblioteca de entrada/salida para imprimir en pantalla
#include <cstdlib> //Biblioteca para pausar la ejecución del programa

using namespace std; //Espacio de nombres de plantilla estándar

int main(){				//Inicia función principal
	string cadena;		//Declaración de una cadena
	cadena = "";		//Inicialización
	/*
	Mensaje que describe qué hace el programa

	La palabra endl indica que el programa debe hacer un salto de línea.
	
	Es equivalente a utilizar el caracter \n
	*/
	cout << "Este programa pide una cadena de caracteres y luego la muestra" ;
	cout << "en pantalla" << endl << endl;
	/*
	Muestra en pantalla la cadena "Escribe algo" y luego un fin de 
	línea, para que el cursor salte a la siguiente línea.
	*/
	cout << "Escribe una palabra, número o frase" << endl;	
	
	//Captura por teclado y captura en la variable "cadena"

	getline(cin,cadena);					//Esta línea captura una palabra solamente
				
	cout << "El eco dice: " << cadena << endl;			//Imprime el valor de la cadena y un fin de línea
		
	system("PAUSE");
	
	return 0;		//Valor de retorno por defecto
}					//Llave izquierda que encierra la función principal

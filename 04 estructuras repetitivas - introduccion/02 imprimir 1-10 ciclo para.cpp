// Autor: Miguel Duss�n

/*
Programa que muestra los n�meros desde 0 hasta 10 
utilizando ciclo mientras
*/

#include <iostream>
#include <cstdlib>

using namespace std;

int main(){

	/*
	El ciclo mientras se divide en varias partes:
	
	for( A ; B ; C ){
		
		Bloque de c�digo que se repite
	}
	
	Donde: 
	
	A. Valores iniciales de variables de control.
	B. Condici�n de ciclo.
	C. Incremento de variables de control.
	
	*/

	for(int i = 1 ;i <= 10 ; i++){ // Abre ciclo para
		
		cout << i << endl; //imprime el n�mero

	} // Cierra ciclo mientras

	system("pause");
	
	return 0;
}

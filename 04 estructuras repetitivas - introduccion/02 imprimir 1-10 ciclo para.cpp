// Autor: Miguel Dussán

/*
Programa que muestra los números desde 0 hasta 10 
utilizando ciclo mientras
*/

#include <iostream>
#include <cstdlib>

using namespace std;

int main(){

	/*
	El ciclo mientras se divide en varias partes:
	
	for( A ; B ; C ){
		
		Bloque de código que se repite
	}
	
	Donde: 
	
	A. Valores iniciales de variables de control.
	B. Condición de ciclo.
	C. Incremento de variables de control.
	
	*/

	for(int i = 1 ;i <= 10 ; i++){ // Abre ciclo para
		
		cout << i << endl; //imprime el número

	} // Cierra ciclo mientras

	system("pause");
	
	return 0;
}

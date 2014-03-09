/*
Autor: Miguel Dussán

Este programa demuestra el funcionamiento de la instrucción break
en una estructura repetitiva.
*/
#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
	
	/*
	Este ciclo hace el recorrido usando la variable i e
	imprimiéndola, en un rango desde 0 hasta 10.

	*/
	
	for(int i=0;i<10;i++){ //Inicio ciclo for
		cout << i << endl;
		/*
		Si i llega a 7, entra en esta condicional,
		ejecuta la sentencia break y termina el ciclo,
		a pesar de que el rango del for va de 0 a 10
		*/
		if (i == 7)
			break;
	} //Fin ciclo for
	system("PAUSE");
	return 0;
}

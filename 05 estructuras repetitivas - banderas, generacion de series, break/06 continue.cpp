/*
Autor: Miguel Duss�n

Este programa demuestra el funcionamiento de la instrucci�n continue
en una estructura repetitiva.
*/
#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
	
	/*
	Este ciclo hace el recorrido usando la variable i e
	imprimi�ndola, en un rango desde 0 hasta 10.

	*/
	
	for(int i=0;i<10;i++){ //Inicio ciclo for
		cout << i << " ";
		/*
		Si dentro de un ciclo el programa alcanza esta
		instrucci�n, el programa asume que se termina inmediatamente
		la iteraci�n omitiendo las instrucciones que se encuentran
		a continuaci�n
		*/
		continue;
		cout << "Este mensaje no saldr� en pantalla";
	} //Fin ciclo for
	system("PAUSE");
	return 0;
}

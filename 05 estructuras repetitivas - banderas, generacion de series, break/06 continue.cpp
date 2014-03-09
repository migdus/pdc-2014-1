/*
Autor: Miguel Dussán

Este programa demuestra el funcionamiento de la instrucción continue
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
		cout << i << " ";
		/*
		Si dentro de un ciclo el programa alcanza esta
		instrucción, el programa asume que se termina inmediatamente
		la iteración omitiendo las instrucciones que se encuentran
		a continuación
		*/
		continue;
		cout << "Este mensaje no saldrá en pantalla";
	} //Fin ciclo for
	system("PAUSE");
	return 0;
}

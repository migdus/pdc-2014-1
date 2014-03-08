// Autor: Miguel Duss�n

/*
Programa que muestra los n�meros desde 0 hasta 10 
utilizando ciclo mientras
*/

#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
	
	//Variable de control de ciclo
	//Tambi�n se utiliza para mostrar el n�mero actual dentro del ciclo
	
	int i = 1;
	
	/*
	
	El ciclo hacer-mientras repite un bloque de c�digo ejecut�ndolo una vez y luego
	haciendo una evaluaci�n sobre la condici�n l�gica:
	
	do{
		
		Bloque de c�digo
		
	}while( condici�n l�gica);
	
	Si se requiere que se ejecute un n�mero de veces, se debe incluir una variable
	de control que se modifica en cada iteraci�n y que es evaluada en la condici�n.
	Si el resultado de esta condici�n es "Verdadero", el bloque se repite.
	*/
	do{
		cout << i << endl;
		
		i++; // Incremento de la variable de control
		
	}while(i <= 10);

	system("pause");
	
	return 0;
}

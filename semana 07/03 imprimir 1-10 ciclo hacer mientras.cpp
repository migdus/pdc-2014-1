// Autor: Miguel Dussán

/*
Programa que muestra los números desde 0 hasta 10 
utilizando ciclo mientras
*/

#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
	
	//Variable de control de ciclo
	//También se utiliza para mostrar el número actual dentro del ciclo
	
	int i = 1;
	
	/*
	
	El ciclo hacer-mientras repite un bloque de código ejecutándolo una vez y luego
	haciendo una evaluación sobre la condición lógica:
	
	do{
		
		Bloque de código
		
	}while( condición lógica);
	
	Si se requiere que se ejecute un número de veces, se debe incluir una variable
	de control que se modifica en cada iteración y que es evaluada en la condición.
	Si el resultado de esta condición es "Verdadero", el bloque se repite.
	*/
	do{
		cout << i << endl;
		
		i++; // Incremento de la variable de control
		
	}while(i <= 10);

	system("pause");
	
	return 0;
}

// Autor: Miguel Dussán

// Programa que suma los números del 0 al 10 usando ciclos

#include <iostream>
#include <cstdlib>

using namespace std;

int main(){

	//Variable que acumula los resultados parciales de la suma
	int acumulador = 0;
	
	for(int i = 1; i <= 10; i++){
		/* 
		La variable acumuladora almacena los resultados parciales de la variable
		de control de ciclo. 
		acumulador += control equivale a: acumulador = acumulador + control
		*/
		acumulador += i;
	} // Cierra ciclo mientras

	//Mostrar en pantalla el resultado

	cout << "Resultado de la suma de los numeros del 1 al 10: " << acumulador << endl;

	system("pause");

	return 0;
}

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

	while(i <= 10){ //Abre ciclo mientras

		cout << i << endl;  //imprime el n�mero

		// Incremento de la variable de control
		i++; //equivalente a: numero = numero + 1 
	} // Cierra ciclo mientras

	system("pause");
	
	return 0;
}

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

	while(i <= 10){ //Abre ciclo mientras

		cout << i << endl;  //imprime el número

		// Incremento de la variable de control
		i++; //equivalente a: numero = numero + 1 
	} // Cierra ciclo mientras

	system("pause");
	
	return 0;
}

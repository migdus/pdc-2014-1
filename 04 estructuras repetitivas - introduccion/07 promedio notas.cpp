// Autor: Miguel Duss�n

/*
Programa captura de forma indefinida notas de estudiante 
(hasta que se introduce un n�mero negativo), y calcula el promedio.
*/

#include <iostream>
#include <iomanip>
#include <cstdlib>

using namespace std;

int main(){

	//Variable que cuenta el n�mero de notas ingresadas
	int contador = 0;

	//Variable que acumula los resultados parciales de la suma
	float acumulador = 0;

	//Variable que captura el n�mero que el usuario ingresa por teclado
	float nota = 0;

	while(nota >= 0 ){ //Abre ciclo mientras

		cout << "Nota? ";
		cin >> nota;

		if(nota >=0){
			/*
			acumulador += control equivale a: acumulador = acumulador + control
			*/
			acumulador += nota;

			contador++;
		}

	} // Cierra ciclo mientras

	//Mostrar en pantalla el resultado del promedio
	cout << fixed << setprecision(1); // Mostrar una cifra decimal
	cout << "Promedio para " << contador << " notas ingresadas: " << acumulador / contador << endl;

	system("pause");

	return 0;
}

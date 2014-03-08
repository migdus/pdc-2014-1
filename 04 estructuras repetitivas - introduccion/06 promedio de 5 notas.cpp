// Autor: Miguel Dussán

/*
Programa captura de forma indefinida notas de estudiante 
(hasta que se introduce un número negativo), y calcula el promedio.
*/

#include <iostream>
#include <iomanip>
#include <cstdlib>

using namespace std;

int main(){

	//Variable que acumula los resultados parciales de la suma
	float acumulador = 0;

	//Variable que captura el número que el usuario ingresa por teclado
	float nota = 0;

	for(int contador = 0 ; contador < 5 ; contador++){
		cout << "Nota No. " << contador + 1 << " ? " ;
		cin >> nota;
		acumulador += nota;
	}

	//Mostrar en pantalla el resultado del promedio
	cout << fixed << setprecision(1); // Mostrar una cifra decimal
	cout << "Promedio para 5 notas ingresadas: " << acumulador / 5 << endl;

	system("pause");

	return 0;
}

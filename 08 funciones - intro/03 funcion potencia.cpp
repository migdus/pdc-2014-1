//Autor: Miguel Duss�n

/*
Programa que implementa la funci�n potencia
*/

#include <iostream>
#include <cstdlib>

using namespace std;

//Prototipos de funciones
int potencia(int,int);


/*
Funci�n que calcula una potencia.
Par�metros:
long b: la base
long e: el exponente
Retorno:
int : La potencia
*/
int potencia(int b,int e){
	//Declaraci�n con variables con alcance a esta funci�n
	long pot = 1;
	
	for(int i=0;i<e;i++)
		pot *= b;
	
	/*
	Variable que contiene el valor de retorno
	Se utiliza la palabra clave return para devolver un valor
	a la funci�n a la que se le hizo el llamado
	*/
	return pot;
}

int main(){
	//Declaraci�n de variables de la funci�n principal
	int base,exponente,res;
	cout << "Ingrese la base ";
	cin >> base;
	
	cout << "Ingrese el exponente ";
	cin >> exponente;
	
	/*
	Llamado a la funci�n.
	Las variables base y exponente son dos argumentos, deben coincidir los
	tipos de datos con los de la funci�n.
	La variable res recibe el resultado retornado por la funci�n potencia
	*/
	res = potencia(base,exponente);
	
	// Mostrar resultados
	
	cout << "potencia(" << base;
	cout << "," << exponente << ") = " << res << endl;
	
	//Reutilizaci�n de c�digo usando la misma funci�n con
	//Otros argumentos
	
	cout << "potencia("<< res << "," << exponente << ") = ";
	cout << potencia(res,exponente) << endl;
	
	system("PAUSE");
	return 0;
}

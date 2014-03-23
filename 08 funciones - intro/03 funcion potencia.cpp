//Autor: Miguel Dussán

/*
Programa que implementa la función potencia
*/

#include <iostream>
#include <cstdlib>

using namespace std;

//Prototipos de funciones
int potencia(int,int);


/*
Función que calcula una potencia.
Parámetros:
long b: la base
long e: el exponente
Retorno:
int : La potencia
*/
int potencia(int b,int e){
	//Declaración con variables con alcance a esta función
	long pot = 1;
	
	for(int i=0;i<e;i++)
		pot *= b;
	
	/*
	Variable que contiene el valor de retorno
	Se utiliza la palabra clave return para devolver un valor
	a la función a la que se le hizo el llamado
	*/
	return pot;
}

int main(){
	//Declaración de variables de la función principal
	int base,exponente,res;
	cout << "Ingrese la base ";
	cin >> base;
	
	cout << "Ingrese el exponente ";
	cin >> exponente;
	
	/*
	Llamado a la función.
	Las variables base y exponente son dos argumentos, deben coincidir los
	tipos de datos con los de la función.
	La variable res recibe el resultado retornado por la función potencia
	*/
	res = potencia(base,exponente);
	
	// Mostrar resultados
	
	cout << "potencia(" << base;
	cout << "," << exponente << ") = " << res << endl;
	
	//Reutilización de código usando la misma función con
	//Otros argumentos
	
	cout << "potencia("<< res << "," << exponente << ") = ";
	cout << potencia(res,exponente) << endl;
	
	system("PAUSE");
	return 0;
}

/*
Autor: Miguel Duss�n
*/

/*
Este programa suma dos n�meros
*/

#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
	int a;		//Declaraci�n de entero
	int b = 0;	//Declaraci�n e inicializaci�n en la misma l�nea
	int c = 0;
	a = 0;		//Inicializaci�n
	
	cout << "Este programa suma dos numeros" << endl << endl;
	
	cout << "Primer numero? ";	//Solicita el primer n�mero
	cin >> a;					//Captura el primer n�mero por teclado
	
	cout << "Segundo numero? ";	//Solicita el segundo n�mero
	cin >> b;					//Captura el segundo n�mero por teclado
	
	c = a + b;				//Realiza la operaci�n y la almacena en una variable
	
	//Imprime la operaci�n. 
	cout << endl;
	cout << a ;
	cout << " + ";
	cout << b ;
	cout << " = ";
	cout << c ;
	cout << endl;

	/*
	Las impresiones en pantalla se pueden hacer tambi�n en una sola l�nea,
	separando las cadenas y variables con el operador "<<":
	*/
	
	cout << endl << "(esta es otra manera de escribir la instruccion para que muestre";
	cout << "la informacion. Revisa el codigo fuente para mas detalles)" << endl << endl;

	cout << a << " + " << b << " = " << c << endl;
	
	system("PAUSE");
	
	return 0;
}

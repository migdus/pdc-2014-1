//Autor: Miguel Duss�n

/*
Programa que implementa la funci�n cubo
*/

#include <iostream>
#include <cstdlib>

using namespace std;

//Prototipos de funciones
int captura_numero();
int cubo(int);
int cuadrado(int);

/*
Funci�n captura_numero
	Muestra un mensaje para que de forma interactiva el
	usuario ingrese un n�mero.
Par�metros: 
	(ninguno).
Retorno: 
	int: el n�mero capturado
*/
int captura_numero(){
	int numero;
	
	cout << "Ingrese un numero: ";
	cin >> numero;
	
	return numero;
}

/*
Funci�n cuadrado
Par�metro:
int n: el n�mero que se elevar� al cuadrado
Retorna:
int: El n�mero elevado al cuadrado
*/

int cuadrado(int n){
	return n*n;
}

/*
Funci�n cubo
Par�metro:
int n: el n�mero que se elevar� al cubo
Retorna:
int: El n�mero elevado al cubo
*/

int cubo(int n){
	return cuadrado(n) * n;
}

//Funci�n principal

int main(){
	int numero, resultado;
	
	cout << "Cubo del primer numero" << endl;
	
	/*
	Llamado a una funci�n que no recibe argumentos
	pero retorna un valor entero que se almacena en numero
	*/
	numero = captura_numero();
	
	/*
	C�lculo del cubo, haciendo llamado a una funci�n que
	recibe un argumento y retorna un n�mero entero que se
	almacena en resultado
	*/
	resultado = cubo(numero);
	
	cout << "El resultado para el primer numero fue: " << resultado << endl << endl;
	
	cout << "Cubo del segundo numero" << endl;
	
	numero = captura_numero();
	resultado = cubo(numero);
	
	cout << "El resultado para el segundo numero fue: " << resultado << endl;
	
	system("PAUSE");
	return 0;
	
}

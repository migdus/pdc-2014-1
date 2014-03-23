//Autor: Miguel Dussán

/*
Programa que implementa la función cubo
*/

#include <iostream>
#include <cstdlib>

using namespace std;

//Prototipos de funciones
int captura_numero();
int cubo(int);
int cuadrado(int);

/*
Función captura_numero
	Muestra un mensaje para que de forma interactiva el
	usuario ingrese un número.
Parámetros: 
	(ninguno).
Retorno: 
	int: el número capturado
*/
int captura_numero(){
	int numero;
	
	cout << "Ingrese un numero: ";
	cin >> numero;
	
	return numero;
}

/*
Función cuadrado
Parámetro:
int n: el número que se elevará al cuadrado
Retorna:
int: El número elevado al cuadrado
*/

int cuadrado(int n){
	return n*n;
}

/*
Función cubo
Parámetro:
int n: el número que se elevará al cubo
Retorna:
int: El número elevado al cubo
*/

int cubo(int n){
	return cuadrado(n) * n;
}

//Función principal

int main(){
	int numero, resultado;
	
	cout << "Cubo del primer numero" << endl;
	
	/*
	Llamado a una función que no recibe argumentos
	pero retorna un valor entero que se almacena en numero
	*/
	numero = captura_numero();
	
	/*
	Cálculo del cubo, haciendo llamado a una función que
	recibe un argumento y retorna un número entero que se
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

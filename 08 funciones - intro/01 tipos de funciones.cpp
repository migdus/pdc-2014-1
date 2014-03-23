//Autor: Miguel Dussán

/*
Programa de demostración de 4 tipos de funciones:
1. Funciones que no reciben ni retornan valores.
2. Funciones que no retornan valores pero sí los reciben.
3. Funciones que retornan valores pero no los reciben.
4. Funciones que reciben y retornan valores.
*/

#include <iostream>
#include <cstdlib>

using namespace std;

/*
Prototipos de funciones
Permiten indicarle al compilador información sobre las funciones
incluídas en el programa, como son: nombres, tipos y número de parámetros y
tipo de dato de retorno.
*/
void f1();
void f2(string);
int f3();
string f4(int);

/*
Función que no recibe ni retorna valore.
*/
void f1(){
	cout << "Soy una funcion que no retorna valor"<<endl;
	return;
}

/*
Función que recibe valores pero no los retorna.
Parámetros:
cadena: Una palabra.
*/
void f2(string cadena){
	cout << "Soy una funcion que no retorna valor, pero recibo parametros"<<endl;
	cout << "Recibi la siguiente palabra: "  << cadena << endl;
}

/*
Función que retorna valores pero no los recibe.
Retorna: El número 5.
*/
int f3(){
	cout << "Soy una funcion que no recibe parametros, pero retorna un valor" << endl;
	return 5;
}

/*
Función que recibe y retorna valores

Entradas: 
x: Un número entero

Salidas:
Una cadena de caracteres que indica el número recibido
*/
string f4(int x){
	cout << "Soy una funcion que recibe parametros y retorna un valor" << endl;
	switch(x){
		case 1:
			return "El numero recibido fue uno";
		case 2:
			return "El numero recibido fue dos";
		default:
			return "El numero recibido no fue ni uno ni dos";
	}
}

/*
Función principal
*/
int main(){
	// Declaración de variables
	
	int n;
	string cadena;
	
	// Captura de datos
	
	cout << "Ingrese un numero: ";
	cin >> n;
	cout << "Ingrese una palabra: ";
	cin >> cadena;
	
	// Llamado a la función f1
	f1();
	
	// Llamado a la función f2 usando cadena como parámetro
	f2(cadena);
	
	/* 
	Llamado a la función f3. El resultado se almacena
	en la variable resultadof3
	*/
	int resultadof3 = f3();
	//Mostrar resultados para la función
	cout << "El resultado para la funcion f3 es: ";
	cout << resultadof3 << endl;
	
	/* 
	Llamado a la función f4 usando como parámetro
	la variable n. El resultado se almacena
	en la variable resultadof4
	*/
	string resultadof4=f4(n);
	//Mostrar resultados para la función
	cout << "El resultado para la funcion f4 es: ";
	cout << resultadof4 << endl;
	
	system("PAUSE");
	return 0;

}

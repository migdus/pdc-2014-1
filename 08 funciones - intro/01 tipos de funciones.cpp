//Autor: Miguel Duss�n

/*
Programa de demostraci�n de 4 tipos de funciones:
1. Funciones que no reciben ni retornan valores.
2. Funciones que no retornan valores pero s� los reciben.
3. Funciones que retornan valores pero no los reciben.
4. Funciones que reciben y retornan valores.
*/

#include <iostream>
#include <cstdlib>

using namespace std;

/*
Prototipos de funciones
Permiten indicarle al compilador informaci�n sobre las funciones
inclu�das en el programa, como son: nombres, tipos y n�mero de par�metros y
tipo de dato de retorno.
*/
void f1();
void f2(string);
int f3();
string f4(int);

/*
Funci�n que no recibe ni retorna valore.
*/
void f1(){
	cout << "Soy una funcion que no retorna valor"<<endl;
	return;
}

/*
Funci�n que recibe valores pero no los retorna.
Par�metros:
cadena: Una palabra.
*/
void f2(string cadena){
	cout << "Soy una funcion que no retorna valor, pero recibo parametros"<<endl;
	cout << "Recibi la siguiente palabra: "  << cadena << endl;
}

/*
Funci�n que retorna valores pero no los recibe.
Retorna: El n�mero 5.
*/
int f3(){
	cout << "Soy una funcion que no recibe parametros, pero retorna un valor" << endl;
	return 5;
}

/*
Funci�n que recibe y retorna valores

Entradas: 
x: Un n�mero entero

Salidas:
Una cadena de caracteres que indica el n�mero recibido
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
Funci�n principal
*/
int main(){
	// Declaraci�n de variables
	
	int n;
	string cadena;
	
	// Captura de datos
	
	cout << "Ingrese un numero: ";
	cin >> n;
	cout << "Ingrese una palabra: ";
	cin >> cadena;
	
	// Llamado a la funci�n f1
	f1();
	
	// Llamado a la funci�n f2 usando cadena como par�metro
	f2(cadena);
	
	/* 
	Llamado a la funci�n f3. El resultado se almacena
	en la variable resultadof3
	*/
	int resultadof3 = f3();
	//Mostrar resultados para la funci�n
	cout << "El resultado para la funcion f3 es: ";
	cout << resultadof3 << endl;
	
	/* 
	Llamado a la funci�n f4 usando como par�metro
	la variable n. El resultado se almacena
	en la variable resultadof4
	*/
	string resultadof4=f4(n);
	//Mostrar resultados para la funci�n
	cout << "El resultado para la funcion f4 es: ";
	cout << resultadof4 << endl;
	
	system("PAUSE");
	return 0;

}

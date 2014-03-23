//Autor: Miguel Duss�n

//Paso de par�metros a funciones por valor y referencia

#include <iostream>
#include <cstdlib>
using namespace std;

//Definici�n de prototipos de funciones


void cubo_por_valor(int );

/*
Definici�n de prototipo de funci�n que 
recibe par�metro por referencia.

Notar el s�mbolo asterisco despu�s del tipo de dato.
Este es el operador de indirecci�n o desreferencia.
*/

void cubo_por_referencia(int *);

int main(){
	int num = 3;
	
	cout << "Valor de la variable antes llamar la funcion cubo por valor: ";
	cout << num << endl;
	
	cubo_por_valor(num);
	
	cout << "Valor de la variable despues llamar la funcion cubo por valor: ";
	cout << num << endl;
	
	cout << "Valor de la variable antes llamar la funcion cubo por referencia: ";
	cout << num << endl;
	
	/*
	El s�mbolo & indica que se pasar� la posici�n de memoria a la funci�n en lugar
	del valor que contiene la variable. Se pasa la referencia.
	*/
	cubo_por_referencia(&num);
	
	cout << "Valor de la variable despues llamar la funcion cubo por referencia: ";
	cout << num << endl;
	
	system("PAUSE");
	return 0;
	
}
//Funci�n cubo recibiendo par�metros por valor
void cubo_por_valor(int n){
	n = n * n * n;
}

//Funci�n cubo recibiendo par�metros por referencia
void cubo_por_referencia(int *n){
	/*
	La operaci�n de multiplicaci�n se realiza la desreferencia de
	la direcci�n de memoria obtenida desde la llamada de la funci�n
	*/
	*n = *n * *n * *n;
}

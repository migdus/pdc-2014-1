//Autor: Miguel Dussán

//Paso de parámetros a funciones por valor y referencia

#include <iostream>
#include <cstdlib>
using namespace std;

//Definición de prototipos de funciones


void cubo_por_valor(int );

/*
Definición de prototipo de función que 
recibe parámetro por referencia.

Notar el símbolo asterisco después del tipo de dato.
Este es el operador de indirección o desreferencia.
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
	El símbolo & indica que se pasará la posición de memoria a la función en lugar
	del valor que contiene la variable. Se pasa la referencia.
	*/
	cubo_por_referencia(&num);
	
	cout << "Valor de la variable despues llamar la funcion cubo por referencia: ";
	cout << num << endl;
	
	system("PAUSE");
	return 0;
	
}
//Función cubo recibiendo parámetros por valor
void cubo_por_valor(int n){
	n = n * n * n;
}

//Función cubo recibiendo parámetros por referencia
void cubo_por_referencia(int *n){
	/*
	La operación de multiplicación se realiza la desreferencia de
	la dirección de memoria obtenida desde la llamada de la función
	*/
	*n = *n * *n * *n;
}

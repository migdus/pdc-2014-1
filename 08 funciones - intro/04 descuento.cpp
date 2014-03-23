//Autor: Miguel Dussán

//Programa de aplicación de funciones

/*
Escriba un programa que capture el sueldo de un empleado 
y su categoría. Si pertenece a la categoría 1 se le descuenta
el 2%, si pertenece a la categoría 2 se le descuenta el 3% y
si pertenece a la categoría 3 se le descuenta el 5% de su sueldo.
*/


#include <iostream>
#include <cstdlib>

using namespace std;

//Prototipo de la función
double calculo_descuento(double, int);

/*
Función para calcular el descuento basado en la categoria
Entradas:
double sueldo : el sueldo del trabajador
int categoria : la categoría a la que pertenece
Salidas:
double : el descuento que se debe aplicar al sueldo del trabajador
*/

double calculo_descuento(double sueldo, int categoria){
	/*
	No se necesita break porque una vez se alcanza la
	línea del retorno no se sigue evaluando el switch
	*/	
	switch(categoria){
		case 1:
			return sueldo * 2 /100;
		case 2:
			return sueldo * 3 /100;
		case 3:
			return sueldo * 5 /100;
	}
	//Esta línea no se debería alcanzar nunca, ya que se aseguró que
	//la categoría estuviera entre 1 y 3
	return 0;
}

//Función principal
int main(){
	double sueldo,descuento;
	int categoria;
	// Captura y validación del sueldo
	do{
		cout << "Sueldo del empleado? ";
		cin >> sueldo; 
	}while(sueldo < 1);
	// Captura y validación de la categoría
	do{
		cout << "Categoria? (1,2,3): ";
		cin >> categoria;
	}while(categoria < 1 || categoria > 3);
	
	descuento = calculo_descuento(sueldo, categoria);
	
	cout << "El total del descuento es "<<descuento << endl;
	cout << "El total a pagar es " <<sueldo-descuento << endl;
	system("PAUSE");
	return 0;
}

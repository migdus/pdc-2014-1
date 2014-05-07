#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
	int tam;
	/*
    	Hacer mientras el usuario no especifique un tamaño
    	de al menos un elemento
    	*/
    	do {
    	    cout << "Cantidad de elementos? ";
    	    cin >> tam;
    	} while(tam < 1);
	
	// Arreglo con números ingresados por el usuario
	int arreglo[tam];

	//Arreglo que indica si se ha contabilizado un número
	bool contabilizado[tam];	

	// Pedir e insertar números a la matriz
	for(int i=0; i < tam; i++){
		cout << "Numero para posicion "<< i << " ";
		cin >> arreglo[i];
		contabilizado[i] = false;
	}
	//Cuenta la frecuencia de un elemento en el arreglo
	int contador;
	
	// Ciclo externo: Selecciona un número que comparará
	// con el resto de elementos del arreglo
	for(int i=0; i<tam;i++){
		// Inicializa el contador para el elemento
		// fijado
		contador = 0;

		// Ciclo interno: recorre todo el arreglo
		// para comparar con el elemento 
		for(int j=0; j < tam; j++){
			// Comparación: Verififica que el elemento
			// no se haya comparado, que el elemento
			// en la posición del ciclo externo sea igual
			// al elemento en la posición dada por el ciclo
			// interno
			if(contabilizado[j] == false && 
				arreglo[i] == arreglo[j]){
				contador++; // Incremento
				// Lógica para evitar que
				// en la salida se repitan los elementos
				if(i != j)
					contabilizado[j] = true;
			}
		}
		// Si el elemento no ha sido contabilizado antes,
		// mostrar la frecuencia
		if(contabilizado[i] == false){
			cout << "Frec para " << arreglo[i] << " -> " << contador << endl;
			contabilizado[i] = true; 
		}
	}
	
	system("PAUSE");
	return 0;
}

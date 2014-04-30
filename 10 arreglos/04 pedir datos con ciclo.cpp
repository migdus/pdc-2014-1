#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
	//Declaracion del arreglo de 10 elementos de tipo int
	int a[10];
	//Iterar por todas las posiciones del arreglo
	for(int i=0; i<10; i++){
		//Pedir dato para la posicion i-esima
		cout << "Ingrese un valor para el indice " << i <<" ";
		// Capturar la informacion en la posicion del arreglo
		// dada por la variable de recorrido i
		cin >> a[i];
	} 
	
	cout << '\t' << "Posicion" << "\t" << "Valor" << endl;
	for(int j=0; j<10; j++)
        	cout<<'\t' << j << "\t\t" << a[j] << endl;
	system("PAUSE");
	return 0;
}

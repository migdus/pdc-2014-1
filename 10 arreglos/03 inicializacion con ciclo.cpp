#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
	//Declaracion del arreglo de 10 elementos de tipo int
	int a[10];
	//Inicializacion del arreglo
	//Se debe tomar cada una una de las posiciones y asignarles un valor

	for(int i=0; i<10; i++)
        	a[i]=0; //Valor inicial para la posicion i-esima del arreglo
	
	cout << '\t' << "Posicion" << "\t" << "Valor" << endl;
	for(int j=0; j<10; j++)
        	cout<<'\t' << j << "\t\t" << a[j] << endl;
	system("PAUSE");
	return 0;
}

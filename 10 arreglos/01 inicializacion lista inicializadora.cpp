#include <iostream>
#include <cstdlib>

using namespace std;

int main() {

    //Declaraci?n e inicializaci?n del arreglo de 10 elementos de tipo int
	int a[10]= {3,56,4,2,30,12,6,4,73,49};
 
	// Imprimir las posiciones y el contenido	
	cout << '\t' << "Posicion" << "\t" << "Valor" << endl;
	for(int j=0; j<10; j++)
        	cout<<'\t' << j << "\t\t" << a[j] << endl;
	system("PAUSE");
	return 0;
   
}

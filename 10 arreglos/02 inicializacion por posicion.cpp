#include <iostream>
//#include <cstdlib>

using namespace std;

int main() {

    //Declaraci?n e inicializaci?n del arreglo de 10 elementos de tipo int
	int a[10];
 	a[0] = 3;
	a[1] = 56;
	a[2] = 4;
	a[3] = 2;
 	a[4] = 30;
	a[5] = 12;
	a[6] = 6;
	a[7] = 4;
 	a[8] = 73;
	a[9] = 49;
	// Imprimir las posiciones y el contenido	
	cout << '\t' << "Posicion" << "\t" << "Valor" << endl;
	for(int j=0; j<10; j++)
        	cout<<'\t' << j << "\t\t" << a[j] << endl;
	//system("PAUSE");
	return 0;
   
}

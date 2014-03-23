/*
Autor original: Enrique Garc�a Hern�ndez
http://ejercicioscpp.blogspot.com.es
http://ejercicioscpp.blogspot.com/2013/07/ambito-alcance-de-una-variable-en-c.html
Esta obra est� bajo una licencia Creative Commons 
Reconocimiento-NoComercial-CompartirIgual 3.0 Espa�a License.

Breves ajustes por: Miguel Duss�n
*/

/*
Variables globales.
Son variables declaradas fuera de cualquier funci�n, 
normalmente al comienzo del programa.
Las variables globales son accesibles desde su declaraci�n 
hasta el final del programa por todas las funciones que lo forman.
*/

// Ejemplo de variable global

#include <iostream>
#include <cstdlib>
using namespace std;

//se declara x como global - por fuera de cualquier funci�n.
int x = 1;

//Prototipo de funci�n
void funcion();

int main()
{
    cout << x << endl; // muestra 1
    x++;
    cout << x << endl, // muestra 2

    //se llama a una funci�n que accede a
    //la variable global x
    funcion();

    cout << x << endl, // muestra 4
    system("pause");
    return 0;
}

void funcion()
{
    //la funci�n tiene acceso a la variable global x
    x = x * 2;
}

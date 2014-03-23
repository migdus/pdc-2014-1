/*
Autor original: Enrique García Hernández
http://ejercicioscpp.blogspot.com.es
http://ejercicioscpp.blogspot.com/2013/07/ambito-alcance-de-una-variable-en-c.html
Esta obra está bajo una licencia Creative Commons 
Reconocimiento-NoComercial-CompartirIgual 3.0 España License.

Breves ajustes por: Miguel Dussán
*/

// Ejemplo de ocultación de variables
#include <iostream>
#include <cstdlib>
using namespace std;
int a = 10; //variable global
int main()
{
  int a = 5; //variable local de main
             //oculta la variable global con el mismo nombre
  cout << a << endl; //muestra 5
  cout << ::a << endl; //acceso a la variable global mediante ::
                       //muestra 10
  system("pause");
  return 0;
}

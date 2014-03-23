/*
Autor original: Enrique García Hernández
http://ejercicioscpp.blogspot.com.es
http://ejercicioscpp.blogspot.com/2013/07/ambito-alcance-de-una-variable-en-c.html
Esta obra está bajo una licencia Creative Commons 
Reconocimiento-NoComercial-CompartirIgual 3.0 España License.

Breves ajustes por: Miguel Dussán
*/

/*
Variables locales

Las variables locales son las que se declaran dentro de una función. 
Son accesibles desde el punto donde se declaran hasta el final del 
bloque donde se han declarado. Los límites de los bloques están definidos 
por las llaves de apertura y cierre { }. Normalmente el final del bloque 
coincide con el final de la función. Si el bloque donde se ha declarado 
la variable local contiene a su vez otros bloques, también son accesibles 
dentro de ellos. Las variables locales se destruyen cuando se sale del bloque 
donde han sido declaradas.
Los parámetros formales (los que aparecen en la cabecera de una función) 
se consideran variables locales de la función.

Ejemplo de uso de variables locales:
El siguiente programa muestra el uso de variables locales. 
El programa lee 10 números por teclado y calcula si el número es primo. 
Para comprobar si el número leído es primo se utiliza una función que 
recibe el número y devuelve true o false según el número sea primo o no.
*/

#include <iostream>
#include <cstdlib>

using namespace std;

//Prototipo de función
bool es_primo(int);

int main()
{   int numero, i; // variables locales de main
    cout << "Introduzca 10 numeros enteros > 0: ";
    for(i=1;i<=10;i++)
    {
        do
        {
           cout << "numero " << i << ": ";
           cin >> numero;
        }while(numero <= 0);
        if (es_primo(numero))
            cout << "Es primo" << endl;
        else
            cout << "No es primo" << endl;
    }
    system("pause");
    return 0;
}

//función que comprueba si un número es primo
//el parámetro n es una variable local de la función
bool es_primo(int n)
{
     int i=2; // i es una variable local de la función
     if(n==1)
        return true;
     else
     {
        while(n%i!=0)
           i++;
        if(i==n)
           return true;
        else
           return false;
     }
}

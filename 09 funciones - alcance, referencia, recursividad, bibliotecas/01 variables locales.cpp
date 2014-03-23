/*
Autor original: Enrique Garc�a Hern�ndez
http://ejercicioscpp.blogspot.com.es
http://ejercicioscpp.blogspot.com/2013/07/ambito-alcance-de-una-variable-en-c.html
Esta obra est� bajo una licencia Creative Commons 
Reconocimiento-NoComercial-CompartirIgual 3.0 Espa�a License.

Breves ajustes por: Miguel Duss�n
*/

/*
Variables locales

Las variables locales son las que se declaran dentro de una funci�n. 
Son accesibles desde el punto donde se declaran hasta el final del 
bloque donde se han declarado. Los l�mites de los bloques est�n definidos 
por las llaves de apertura y cierre { }. Normalmente el final del bloque 
coincide con el final de la funci�n. Si el bloque donde se ha declarado 
la variable local contiene a su vez otros bloques, tambi�n son accesibles 
dentro de ellos. Las variables locales se destruyen cuando se sale del bloque 
donde han sido declaradas.
Los par�metros formales (los que aparecen en la cabecera de una funci�n) 
se consideran variables locales de la funci�n.

Ejemplo de uso de variables locales:
El siguiente programa muestra el uso de variables locales. 
El programa lee 10 n�meros por teclado y calcula si el n�mero es primo. 
Para comprobar si el n�mero le�do es primo se utiliza una funci�n que 
recibe el n�mero y devuelve true o false seg�n el n�mero sea primo o no.
*/

#include <iostream>
#include <cstdlib>

using namespace std;

//Prototipo de funci�n
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

//funci�n que comprueba si un n�mero es primo
//el par�metro n es una variable local de la funci�n
bool es_primo(int n)
{
     int i=2; // i es una variable local de la funci�n
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

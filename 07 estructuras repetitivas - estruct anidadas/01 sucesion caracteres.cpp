/*
 Autor: Miguel Duss�n
 
 Escriba un programa que capture un n�mero n, y a partir de este imprima una
 sucesi�n de caracteres tal que en la primera l�nea aparezca #, en la
 segunda l�nea ##, en la tercera ###, y as� sucesivamente hasta llegar a la
 l�nea n, donde se imprimir�n n caracteres #.
 */

#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
    /*
     n: Variable para guardar el n�mero de l�neas que se deben mostrar
     control_lin: control del ciclo que cuenta le n�mero de l�neas
     control_car: control de caracteres que se imprimen en el ciclo
     anidado.
     */

    int n,control_lin,control_car;
    control_lin = 0;

    cout << "Numero de lineas? ";
    cin >> n;

    while (control_lin < n) {
        /*
         Ciclo anidado que se usa para imprimir los caracteres.
         
         La condici�n de control involucra tanto a la variable control_car
         como a control_lin, pues si es la primera l�nea que se imprime, deber�
         mostrarse un caracter; si es la segunda, dos; si es la tercera, tres, y
         as� sucesivamente hasta llegar al l�mite estipulado por el usuario.
         
         Cada vez que se vaya a iniciar este ciclo, se debe dar un valor
         inicial a la variable de control.
         */
        control_car = 0;
        while(control_car < control_lin + 1) {
            cout << "#";//Se imprime un caracter a la vez
            control_car++; //incremento de variable de control del ciclo anidado
        }
        cout << endl;//Nueva l�nea
        control_lin++;//Incremento de variable de control del ciclo exterior
    }
    system("pause");
    return 0;
}

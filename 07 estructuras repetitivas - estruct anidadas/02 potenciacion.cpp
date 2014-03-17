/*
 Autor: Miguel Duss�n
 
 Escriba un programa que calcule la operaci�n de potenciaci�n entre
 la base y el exponente, utilizando �nicamente adiciones.
 */

#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
    /*
     * base, exponente: Argumentos de entrada
     * cont_multip: contadora del ciclo anidado
     */
    int base,exponente,cont_multip;
    long long int multip = 0; //Resultado de una multiplicaci�n
    /*
     * Contadora del ciclo exterior
     * Controla el n�mero de multiplicaciones que se realizan
     */
    int cont_pot = 0;
    long long int pot = 1;//Almacena el resultado de la potenciaci�n

    cout << "Base? ";
    cin >> base;

    cout << "Exponente? ";
    cin >> exponente;

    while(cont_pot < exponente) {

        multip = 0; //Resultado de la multiplicaci�n
        cont_multip = 0; //Control del ciclo

        // Hacer la multiplicaci�n de la base con el resultado
        // de la anterior multiplicaci�n, que se almacena en pot
        while(cont_multip < pot) {
            multip += base; //se acumulan sumas sucesivas
            cont_multip++; //incremento de la variable de control
        }

        pot=multip; //Guarda �ltima multiplicaci�n realizada
        cont_pot++; //Incremento de variable de control de ciclo
    }

    cout << endl <<"Resultado: " << pot <<endl;
    system("pause");
    return 0;
}

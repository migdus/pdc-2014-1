/*
Autor: Miguel Dussan


El Ministerio de Agricultura colombiano tiene los datos resumidos en miles de 
toneladas de cosecha recolectada en los pisos t�rminos c�lido, templado y fr�o 
del pa�s para los trimestres del a�o anterior. Dise�e un programa que utilizando 
estructuras repetitivas permita al ministerio calcular:

a) El promedio trimestral de cosecha recolectada para el piso t�rmico templado.
b) El mejor y peor trimestre en cantidad de cosecha recolectada para todo el pa�s.
c) El piso t�rmino que tuvo la mayor cantidad de toneladas recolectadas en el 
�ltimo trimestre del a�o.

 */

#include <iostream>

using namespace std;

int main() {
    int calido, templado, frio; //Toneladas recolectadas en un trimestre dado
    int control = 0; //Variable de control del ciclo
    int prom_frio = 0; // Promedio de recolecci�n para el clima fr�o

    /*
     * Guarda el n�mero del mejor y del peor trimestre.
     * El valor inicial es 1, asumiendo que el primero ser� el peor. Si existe
     * un trimestre peor que este, el programa lo modificar�
     */
    int mejor_trim=1;
    int peor_trim=1;

    /*
     * Cantidad recolectada para el mejor y peor trimestre
     */
    int mejor_trim_cant_recol = 0;
    int peor_trim_cant_recol = 0;

    /*
      * Esta bandera permite detectar si es el primer bucle que se est� ejecutando. Si es verdadero,
      * entonces se inicializan las variables de cantidad recolectada para el mejor y peor trimestre.
      * Este bloque se ejecuta una sola vez
      */
    int band_primera_iter = true;

    int total_trim = 0; // Total recolectado en un trimestre

    /*
     * Indica el piso t�rmico que tuvo la mayor recolecci�n en el �ltimo trimestre
     * 1 para c�lido, 2 para templado y 3 para fr�o
     */
    int mayor_recol_ultimo_trim = 0;

    // El a�o tiene 4 trimestres
    while (control < 4) {

        //Solicitud de toneladas recolectadas en un trimestre
        cout << "Toneladas recolectadas para el clima calido para el trimestre " << control + 1 << " ?: ";
        cin >> calido;

        cout << "Toneladas recolectadas para el clima templado para el trimestre " << control + 1 << " ?: ";
        cin >> templado;

        cout << "Toneladas recolectadas para el clima frio para el trimestre " << control + 1 << " ?: ";
        cin >> frio;

        prom_frio += frio;

        total_trim = calido + templado + frio;
		//Para la primera iteraci�n, se inicializan los valores del mejor y peor trimestre
		//Con la informaci�n que introdujo el usuario
        if( band_primera_iter == true) {
            mejor_trim_cant_recol = total_trim;
            peor_trim_cant_recol = total_trim;
            band_primera_iter = false;
        } else {
        	// Se realiza la comparaci�n del total del trimestre para verificar si fue
        	// mejor que la que ya se ten�a identificada
            if( total_trim > mejor_trim_cant_recol) {
                mejor_trim = control + 1;
                mejor_trim_cant_recol = total_trim;
            }
            else
				// Se realiza la comparaci�n del total del trimestre para verificar si fue
        		// peor que la que ya se ten�a identificada
				if (total_trim < peor_trim_cant_recol) {
                	peor_trim = control + 1;
                	peor_trim_cant_recol = total_trim;
            	}
        }
		// Condici�n para verificar cu�l fue el piso t�rmico que tuvo la mayor
		//recolecci�n en el tercer trimestre
        if(control == 3) {
            if(calido > templado && calido > frio) {
                mayor_recol_ultimo_trim = 1;
            }
            else 
				if(templado > calido && templado > frio) {
                	mayor_recol_ultimo_trim = 2;
            	}
            	else
					if(frio > calido && frio > templado) {
                		mayor_recol_ultimo_trim = 3;
            		}
        }
        control++;
    }
    cout << endl << "Resultados"<<endl<<endl;
    cout << "El promedio trimestral de cosecha recolectada para el piso t�rmico templado es: ";
    cout << prom_frio / 4 << endl << endl;

    cout << "El mejor trimestre fue el numero: "<< mejor_trim << " con un total de " << mejor_trim_cant_recol << "e3 toneladas"<<endl;
    cout << "El peor trimestre fue el numero: "<< peor_trim << " con un total de " << peor_trim_cant_recol << "e3 toneladas"<<endl<<endl;

    cout << "El piso termico con mayor recoleccion en el ultimo trimestre fue: ";
    switch(mayor_recol_ultimo_trim) {
    case 1:
        cout << "calido";
        break;
    case 2:
        cout << "templado";
        break;
    case 3:
        cout << "frio";
        break;
    }
    system("pause");
    return 0;
}

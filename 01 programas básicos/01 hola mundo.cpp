/*
  Autor: Miguel Dussán
*/

#include <iostream> //Biblioteca de entrada/salida para imprimir en pantalla
#include <cstdlib> //Biblioteca para pausar la ejecución del programa

using namespace std; //Espacio de nombres de plantilla estándar

//Esto es un comentario de una línea, empieza por dos slash

/*
  Un comentario de múltiples líneas abre con un slash y un asterisco, 
  y cierra con un asterisco y un slash. Los comentarios no son 
  tomados en cuenta al momento de compilar.
*/

/*
  main es la función principal. De allí es que arrancan los programas.
  int indica que esta función devuelve un número entero.
  Los paréntesis indican que esta función principal no recibe 
  argumentos.

  Las llaves {} indican el cuerpo de la función. La llave 
  izquierda { indica que abre la función y la llave derecha } indica 
  que cierra. Dentro de estas dos llaves se escribe la lógica desde la
	que arranca el programa.
*/

int main(){

  /*
    La línea a continuación imprime en pantalla la cadena que se 
    encuentra dentro de las comillas dobles:
	
		Hola mundo
	
	 	utilizando el comando cout ("c out", "salida de c") y el 
		operador <<. Las líneas van con un 
    caracter de terminación que es el punto y coma (;).
  */
  cout << "Hola Mundo!" << "\n";
	
  system("PAUSE");
	
  //Devuelve un número al sistema indicando que el programa terminó correctamente.
  return 0; 
}

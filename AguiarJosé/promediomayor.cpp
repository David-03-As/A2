//JOSÉ DAVID AGUIAR SOSA

//Permite el ingreso y salida de datos ya sea por pantalla o por teclado
#include <iostream>

//Dar acceso al espacio de nombres(namespace)std, donde se encuentra encerrada toda la librería estandar
using namespace std;

//Punto de partida para la ejecución del programa
int main()

//Inicio y final de un bloque de instrucciones
{
	//Almacenan números en formato de coma flotante
	float x,pm=0;

	//Almacena datos de números enteros
	int i=0,l;

	//Permite mostrar por pantalla cualquier tipo de dato
	cout<<"Ingrese l: ";

	//Se utiliza para introducir datos con el operador >> también sobrecargado
	cin>>l;

	//Permite repetir una instrucción o instrucción compuesta hasta que una expresión especifica se falsa
	do {
		cout<<"Ingrese x: ";
		cin>>x;
		i=i+1;

		//Determinar que acción ejecutarse según cierta condición
		if(x>pm){

			//Proceso
			pm=x;
		}
	}while(i<l);
	cout<<"El promedio maximo de el curso es: "<<pm<<endl;

	//Indicar que el programa se ha ejecutado de manera exitosa
	return 0;
}

	

//JOSÉ DAVID AGUIAR SOSA

//Permite el ingreso y salida de datos ya sea por pantalla o por teclado
#include<iostream>

//Dar acceso al espacio de nombres(namespace)std, donde se encuentra encerrada toda la librería estandar
using namespace std;

//Punto de partida para la ejecución del programa
int main()

//Inicio y final de un bloque de instrucciones
{
	//Almacenan números en formato de coma flotante
	float x,s=0,s1=0,s5=0;

	//Almacena datos de números enteros
	int i=0,l,i1=0,i5=0;

	//Permite mostrar por pantalla cualquier tipo de dato
	cout<<"Ingrese l: ";

	//Se utiliza para introducir datos con el operador >> también sobrecargado
	cin>>l;

	//Permite repetir una instrucción o instrucción compuesta hasta que una expresión especifica se falsa
	do{
		cout<<"Ingrese x: ";
		cin>>x;

		//Proceso
		i=i+1;
		s=s+x;

		//Determinar que acción ejecutarse según cierta condición
		if(x==1){
			i1=i1+1;
			s1=s1+x;

		//If-else nos permiten tomar cierta decisión al interior de nuestro algoritmo
		}else{
			i5=i5+1;
			s5=s5+x;
		}
		}while(i<l);
		cout<<"La cantidad de monedas fue: "<<i<<endl;
		cout<<"El valor fue: "<<s<<endl;
		cout<<"La cantidad de monedaa de $1 fue: "<<i1<<endl;
		cout<<"El valor fue: "<<s1<<endl;
		cout<<"La cantidad de monedas de $0.50 fue: "<<i5<<endl;
		cout<<"El valor fue: "<<s5<<endl;

		//Indicar que el programa se ha ejecutado de manera exitosa
		return 0;

}

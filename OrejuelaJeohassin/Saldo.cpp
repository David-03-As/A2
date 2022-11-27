//Jeohassin Wilton Orejuela Garcia
//Permite el ingreso y salida de datos
#include<iostream>
//Da acceso a la libreria
using namespace std;
//Se usa para ejecutar o llamar a la ejecucion
int main()
//Incio de las intruciones
{
	//Permite el ingreso de variables Flotantes
	float x,s=0;
	//Permite el ingreso de variables enteras
	int i=0,l;
	//Permite mostras datos por pantalla
	cout<<"Ingrese cantidad de egresos (l): ";
	//Permite ingresar datos por teclado
	cin>>l;
	cout<<"Ingrese saldo inical (s): ";
	cin>>s;
	//do-while Permite repetir una instruccion hasta que sea falsa
	do{
		cout<<"Ingrese egresos (x): ";
		cin>>x;
		i=i+1;
		s=s+x;

	}while(i<l);
	cout<<"El saldo final es: "<<s<<endl;
	//Provoca que la ejecucion abandone la funcion main
	return 0;
//Fin de las instrucciones	
}

//Jeohassin Wilton Orejuela Garcia
//Permite el ingreso y salida de datos
#include<iostream>
//Da acceso a la libreria
using namespace std;
//Se usa para ejecutar o llamar a la ejecucion
int main() 
//Inicio de las instrucciones
{
	//Permite el ingreso de valores Flotantes
	float x,s=0;
	//Permite el ingreso de valores enteras
	int i=0,l;
	//Permite mostrar datos en pantalla
	cout<<"Ingrese limite: ";
	//Permite ingresar datos por teclado
	cin>>l;
	//do-while Permite repetir una instruccion hasta que sea falsa
	do{
		cout<<"Ingrese x: ";
                cin>>x;
		//Operacion logica
                i=i+1;
                s=s+x;
        }
	while(i<l);

	cout<<"La suma total  es : "<<s<<endl;
	//Provoca que la ejecucion abandone la funcion main
	return 0;
//Fin de la instruciones
}

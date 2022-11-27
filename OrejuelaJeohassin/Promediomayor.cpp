//Jeohassin Wilton Orejuela Garcia
//Permite el ingrewso y salida de datos
#include <iostream>
//Da acceso a la libreria
using namespace std;
//Se usa para ejecutar o llamar a la ejecucion
int main()
//Incio de las instrucciones	
{    
	//Permite ingresar valores flotantes
	float x,pm=0;
	//Permite ingresar valores enteros
	int i=0,l;
	//Permite mostrar datos en pantalla
	cout<<"Ingrese l: ";
	//Permite ingresar datos por teclado
	cin>>l;
	//do-while Permite repetir una instruccion hasta que sea falsa
	do {
		cout<<"Ingrese x: ";
		cin>>x;
		//Operacion logica
		i=i+1;
		if(x>pm){
			pm=x;
		}
	}while(i<l);
	cout<<"El promedio maximo de el curso es: "<<pm<<endl;
       //Provoca que la ejecucion abandone la funcion main
	return 0;
//Fin de las instrucciones	
}

	

//Jeohassin Wilton Orejuela Garcia
//Permite el Ingreso y salida de datos
#include<iostream>
//Permite el ingreso a la libreria
using namespace std;
//Se usa para ejecutar o llamar a la ejecucion
int main()
	//Incio de las intrucciones
{
	//Permite ingresar valores flotante
	float x,s=0,s1=0,s5=0;
	//Permite ingresar valores enteros
	int i=0,l,i1=0,i5=0;
	//Permite mostrar datos en pantalla
	cout<<"Ingrese l: ";
	//Permite ingresar datos por teclado
	cin>>l;
	//do-while Permite repetir una Intruccion asta que sea f          alsa
	do{
		cout<<"Ingrese x: ";
		cin>>x;
		//Operacion logica
		i=i+1;
		s=s+x;
		//if-else Permite controlar al bifurcacion de co                  ndion
		if(x==1){
			i1=i1+1;
			s1=s1+x;
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
               //Provoca que la ejecucion abandone la funcion main
		return 0;

//Fin de la instrucciones
}

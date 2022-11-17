//JOSÉ DAVID AGUIAR SOSA

//Permite el ingreso y salida de datos ya sea por pantalla o por teclado
#include<iostream>

//Dar acceso al espacio de nombres(namespace)std, donde se encuentra encerrada toda la librería estandar
using namespace std;

//Punto de partida para la ejecución del programa
int main()

//Inicio y final de un bloque de instrucciones
{
	//Almacena datos de numeros enteros
	int aa,ma,da,an,mn,dn,a,m,d;

	//Permite mostrar por pantalla cualquier tipo de dato
	cout<<"Ingresa fecha actual: ";

	//Se utiliza para introducir datos con el operador >> también sobrecargado
	cin>>aa>>ma>>da;
	
	cout<<"Ingrese la fecha de nacimiento: ";
	cin>>an>>mn>>dn;

        //Determinar que acción ejecutarse según cierta condición
	if(da>dn){

		//Proceso
		d=da-dn;
	
	//If-else nos permiten tomar cierta decisión al interior de nuestro algoritmo
	}else{
		da=da+30;
		ma=ma-1;
		da=da-dn;
	}
	if(ma>mn){
		m=ma-mn;
	}else{
		ma=ma+12;
		aa=aa-1;
		m=ma-mn;
	}
		a=aa-an;
		cout<<"Usted tiene "<<a<<" años, "<<m<<" meses, "<<d<<" dias "<<endl;

		//Indicar que el programa se ha ejecutado de manera exitosa
		return 0;
}



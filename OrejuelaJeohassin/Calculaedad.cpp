//Orejuela Garcia Jeohassin Wilton

//Permite el ingreso y salida de datos
#include<iostream>
//Da acceso a la libreria
using namespace std;
//El metodo main se usa para ejecutar o llamar a la ejecucion
int main()
	//Inicio de las instrucciones
	
{
	//Declaracion de valores enteros
	int aa,ma,da,an,mn,dn,a,m,d;
	//Mostrar en pantalla
	cout<<"Ingresa fecha actual: ";
	//Permite ingresar datos por teclado
	cin>>aa>>ma>>da;
	
	cout<<"Ingrese la fecha de nacimiento: ";
	cin>>an>>mn>>dn;
        //if-else Permite controlar la bifurcacion condicional
	if(da>dn){
		d=da-dn;
	}else{
		//Proceso
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
	       //La instruccion return provoca que la ejecucion                  abandone la funcion main
		return 0;
}//Fin de las instrucciones



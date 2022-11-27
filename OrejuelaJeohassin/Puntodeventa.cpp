//Jeohassin Wilton Orejuela Garcia
//Permite el ingreso y salida de datos
#include <iostream>
//Da acceso a la libreria
using namespace std;
//Se usa para ejecutar o llamar a la ejecucion
int main()
	//Inicio de la instrucciones
{
    //Permite ingresar valores flotantes	
    float x,s=0,vb,piva=12,viva,pdesc=10,vdesc,vn;
    //Permite ingresar valores enteros 
    int i=0,l;
    //Permite mostras datos en pantalla
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
    } while (i<l);
    //Operacion logica-matematica
    vb=s;
    viva=vb*piva/100;
    vdesc=vb*pdesc/100;
    vn=vb+viva-vdesc;
    cout<<"Valor total a pagar es: "<<vn<<endl;
    //Provoca que la ejecucion abandone la funcion main
    return 0;
//Fin de las intrucciones
}

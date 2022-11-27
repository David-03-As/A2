//Jeohassin Wilton Orejuela Garcia
//Permite el ingreso y la salida de datos
#include<iostream>
//Da acceso a la libreria
using namespace std;
//Se usa para ejecutar o llamar a la ejecucion
int main()
//Inicio de las instrucciones	
{
	//Permite el ingreso de variables flotante
        float imc,peso,altura;
        //Permite mostar datos en pantalla
        cout<<"Ingrese peso (kg): ";
	//Permite ingresar datos por teclado
        cin>>peso;
        cout<<"Ingrese altura (metros): ";
        cin>>altura;
	//Operacion logica-matematica
        imc=peso/(altura*altura);
        //Se utiliza la sentencia if para determinar el flujo del programa en funcion de la evaluacion de la exprecion
        if(imc<18.40)
        {
                cout<<"Su peso es bajo"<<endl;
        }
        if(imc>=18.50 && imc<24.99)
        {
                cout<<"Su peso es normal"<<endl;
        }
        if(imc>=25 && imc<29.99)
        {
                cout<<"Tiene sobrepeso"<<endl;
        }
        if(imc>=30 && imc<34.99)
        {
                cout<<"Tiene obesidad leve"<<endl;
        }
        if(imc>=35 && imc<39)
        {
                cout<<"Tiene obesidad media"<<endl;
        }
        if(imc>40)
        {
                cout<<"Tiene obesidad morbida"<<endl;
        }
        //Provoca que la ejecucion abandone la funcion main
        return 0;
//Fin de las instrucciones	
}


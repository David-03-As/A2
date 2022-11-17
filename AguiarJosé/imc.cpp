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
        float imc,peso,altura;

	//Permite mostrar por pantalla cualquier tipo de dato
        cout<<"Ingrese peso (kg): ";

	//Se utiliza para introducir datos con el operador >> también sobrecargado
        cin>>peso;
        cout<<"Ingrese altura (metros): ";
        cin>>altura;

	//Proceso
        imc=peso/(altura*altura);
       
	//Determinar que acción ejecutarse según cierta condición
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
 
	//Indicar que el programa se ha ejecutado de manera exitosa
        return 0;
}


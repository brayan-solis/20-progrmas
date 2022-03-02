#include "1.opBasicas.cpp"
#include "2.Par-impar.cpp"
#include <iostream>
using namespace std;
void menu();

//void Parimpar();

main (){
		menu();
	//	parimpar();
}
void menu()
{
	int opcion;
    bool repetir = true;

    do
	{
		
		cout <<"\n\tSelecione ocpion"<<endl;
		cout <<"\n\t****************"<<endl;
		cout <<"\n1.Operaciones Matematicas Basicas "<<endl;
		cout <<"\n2.Determinar si un numero es par o impar"<<endl;
		cout <<"\n3.Conversor: de medidas."<<endl;
		cout <<"\n4.Determinar si dato es palidromo."<<endl;
		cout <<"\n2.Conversor de numeros arabicos a Romanos."<<endl;
		cout <<"\n\t***************************"<<endl;
		cout <<"\n0.Regresar"<<endl;
		
		cout <<"\nIngrese Opcion: ";cin>>opcion;
		
		switch (opcion)
		{
			case 1:opBasicas();break;
			//case 2:aarabigos();break;
			case 0:
           		repetir = false;
            	break;
		}	
	}while(repetir);
}
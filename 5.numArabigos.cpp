#include <iostream>
using namespace std;
void aromanos();
void aarabigos();
void paromanos();

main()
{
	 aromanos();
	 paromanos();
		}
		
void aromanos()
{
	int opcion;
    bool repetir = true;

		do
	{
		cout<<"\n\t\t\t*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*: ";
	    cout<<"\n\t\t\tNUMEROS ARABIGOS Y ROMANOS";
	    cout<<"\n\t\t\t*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*: ";
		cout <<"\n\n\tSelecione ocpion"<<endl;
		cout <<"\t-----------------"<<endl;
		cout <<"\n\t\t\t1.Convertir a Numeros Romanos"<<endl;
		cout <<"\n\t_____________________________________________"<<endl;
		
		cout <<"\nIngrese Opcion: ";cin>>opcion;
		
		switch (opcion)
		{
			case 1:paromanos();break;
			case 0:
           		repetir = false;
            	break;
		}	
	}while(repetir);
}
void paromanos()
{
		system("cls");
	int numero, unidades, decenas, centenas, millares;
	/*Esto se hace para separar el numero*/
 
	 	cout<< "\n\n\n\t\tIngrese un numero:"<<"\t\t\t\t"<<endl;
		cin>> numero;
	 	unidades = numero % 10; numero /= 10;
 		decenas = numero % 10; numero /= 10;
 		centenas = numero % 10; numero /= 10;
 		millares = numero % 10; numero /= 10;
cout<< "\n\n\n\t\tEl numero en Romano se escribe:\t\t";
	 switch (millares)
	 {
	  case 1: cout<<"M"; break;
	  case 2: cout<<"MM"; break;
	  case 3: cout<<"MMM"; break;
	 }
	 
	 switch (centenas)
	 {
	  case 1: cout<<"C"; break;
	  case 2: cout<<"CC"; break;
	  case 3: cout<<"CCC"; break;
	  case 4: cout<<"CD"; break;
	  case 5: cout<<"D"; break;
	  case 6: cout<<"DC"; break;
	  case 7: cout<<"DCC"; break;
	  case 8: cout<<"DCCC"; break;
	  case 9: cout<<"CM"; break; 
	 }
	 
	 switch (decenas)
	 {
	  case 1: cout<<"X"; break;
	  case 2: cout<<"XX"; break;
	  case 3: cout<<"XXX"; break;
	  case 4: cout<<"XL"; break;
	  case 5: cout<<"L"; break;
	  case 6: cout<<"LX"; break;
	  case 7: cout<<"LXX"; break;
	  case 8: cout<<"LXXX"; break;
	  case 9: cout<<"XC"; break; 
	 }
	 
	 switch (unidades)
	 {
	  case 1: cout<<"I"; break;
	  case 2: cout<<"II"; break;
	  case 3: cout<<"III"; break;
	  case 4: cout<<"IV"; break;
	  case 5: cout<<"V"; break;
	  case 6: cout<<"VI"; break;
	  case 7: cout<<"VII"; break;
	  case 8: cout<<"VIII"; break;
	  case 9: cout<<"IX"; break;
	 }
	system("pause>nul");
	}
	


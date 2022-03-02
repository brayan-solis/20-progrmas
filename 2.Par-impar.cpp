#include <iostream>
using namespace std;

int main(){
int numero;

    cout<<"\n\t * * * * *  P A R   O   I M P A R ? * * * * *: \n\n";
	cout<<"\n   Introduzca un numero entero: \t";
    cin>>numero;

    if ( numero % 2 == 0 )
        {cout<<"\n\t\t\t -------->   ESTE NUMERO ES PAR\n\n\n";
		}
		
    else
       {cout<<"\n\t\t\t -------->  ESTE NUMERO ES IMPAR\n\n\n";
		} 

	system("PAUSE");
}
#include <iostream>
using namespace std;

int main ()
{
	string dato;
	int aux=0,igual=0;
		cout<<"\n\t\t\t*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*: ";
	    cout<<"\n\t\t\t\tES O NO PALIDROMO?: ";
	    cout<<"\n\t\t\t*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*: ";
		cout<<"\n\n\tFavor Ingresar Palabra o numero: \n\n\t\t\t\t\t\t";
		getline(cin>>ws, dato);
		
		for(int ind=dato.length()-1;ind>=0;ind--){
			if(dato[ind]==dato[aux]){
				igual++;
			}
			aux++;
		}
		if(dato.length()==igual){
			cout<<"\n\n\t_______________________________________"<<endl;
			cout<<"\n\t--La dato ingresado es palindromo--"<<endl;
			cout<<"\n\t*_*-*_*_*-*_*_*-*_*_*-*_*_*-*_*_*-*_"<<endl;
		}
		else{
			cout<<"\n\n\t_______________________________________"<<endl;
			cout<<"\n\t--La palabra validada no es palindromo--"<<endl;
			cout<<"\n\t*_*-*_*_*-*_*_*-*_*_*-*_*_*-*_*_*-*_"<<endl;
		}
		system("pause>nul");
 
}
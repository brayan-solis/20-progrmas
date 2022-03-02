#include <iostream>
using namespace std;

main(){

int n1=0,n2=0;
int opcion;
int suma, resta, multiplicacion, division, total;
float Resultado=0;

cout<<"\t\t\t C a l c u l a d o r a \n\n";
cout<<"\tQue operacion desea realizar?:\n\n";
cout<<"\t\tOpcion 1: Suma\n";
cout<<"\t\tOpcion 2: Resta\n";
cout<<"\t\tOpcion 3: Multiplicacion\n";
cout<<"\t\tOpcion 4: Division\n\n";

cout<<"\tIndique su opcion:\t\t";
cin>>opcion;

cout<<"\n\t\t\tIngrese Numero 1:\t";
cin>>n1;
cout<<"\n\t\t\tIngrese Numero 2:\t";
cin>>n2;


	if (opcion==1)
    {cout<<"\n\t\t* * * * * S U M A * * * * *\n\n\t\t\t";
    suma=n1+n2;
    cout<<"El total es:"<<suma<<endl;}
    
    if (opcion==2)
    {cout<<"\n\t\t* * * * * R E S T A * * * * *\n\n\t\t\t";
    resta=n1-n2;
    cout<<"El total es:"<<resta<<endl;}
    
    if (opcion==3)
    {cout<<"\n\t\t* * * * * M U L T I P L I C A C I O N * * * * *\n\n\t\t\t";
    multiplicacion=n1*n2;
    cout<<"El total es:"<<multiplicacion<<endl;}
    
    if (opcion==4)
    {cout<<"\n\t\t\n* * * * * D I V I S I O N * * * * *\n\n\t\t\t";
    division=n1/n2;
    cout<<"El total es:"<<division<<endl;}
    
	system("PAUSE");
}

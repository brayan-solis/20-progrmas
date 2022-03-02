#include <iostream>
using namespace std;

//---menu
void medidaslong();

//--- Conversiones
void kmAm();
void mAkm();
void mAp();
void pAm();
void lAk();
void kAl();

//--MENU --
int main()
{
medidaslong();
return 0;}

//--Opciones de conversion--
void medidaslong()
{
    int opcion;
    bool repetir = true;

    do
    {
        system("cls");

        cout << "\n\n\t\t\t\t\tM E D I D A S" << endl;
        cout << "\t\t\t\t***********************" << endl;
        cout<<"\tQUE MEDIDA DESEA CONOCER?:\n\n"<<endl;
		cout<<"\t\tOpcion 1: De Kilometros a Millas\n"<<endl;
		cout<<"\t\tOpcion 2: De Millas a Kilometros\n"<<endl;
		cout<<"\t\tOpcion 3: De Metros a Pulgadas\n"<<endl;
		cout<<"\t\tOpcion 4: De Pulgadas a Metros\n"<<endl;
		cout<<"\t\tOpcion 5: De Libras a Kilos\n"<<endl;
		cout<<"\t\tOpcion 6: De Kilos a Libras\n\n"<<endl;
		
		
        cout << "\n\tINGRESE UNA OPCION: ";
        cin >> opcion;

        switch (opcion)
        {
        case 1:
            kmAm();
            break;
            
        case 2:
            mAkm();
            break;
            
       case 3:
            mAp();
            break;
            
        case 4:
            pAm();
            break;
         
        case 5:
            lAk();
            break;
         
        case 6:
            kAl();
            break;

        case 0:
            repetir = false;
            break;
        }
    } while (repetir);
}
void kmAm()
{
    system("cls");
    
    float km=0;
	float Millas=0;
    float resultado;

	cout << "\n\tDe Kilometros a Millas";
    cout << "\n\t________________________\n";

    cout << "\n\tIngrese Km.: ";
    cin >>km;

    cout << "\n\t---------------------------" << endl;
    resultado = km*0.621371;
    cout << "\n\t\tResultado: " << resultado <<" Millas"<<endl;

    system("pause>nul");
}

void mAkm()
{
    system("cls");
    
    float km=0;
	float Millas=0;
    float resultado;

	cout << "\n\tDe Millas a Kilometros";
    cout << "\n\t________________________\n";

    cout << "\n\tIngrese Millas: ";
    cin >>Millas;

    cout << "\n\t\t---------------------------" << endl;
    resultado = Millas*1.60934;
    cout << "\n\t\tResultado: " << resultado <<" Kilometros."<<endl;

    system("pause>nul");
}
void mAp()
{
    system("cls");
    
    float metros=0;
	float pulgadas=0;
    float resultado;

	cout << "\n\tDe Metros a Pulgadas";
    cout << "\n\t________________________\n";

    cout << "\n\tIngrese Metros: ";
    cin >>metros;

    cout << "\n\t\t---------------------------" << endl;
    resultado = metros*39.3701;
    cout << "\n\t\tResultado: " << resultado <<" Pulgadas."<<endl;

    system("pause>nul");
}

void pAm()
{
    system("cls");
    
    float metros=0;
	float pulgadas=0;
    float resultado;

	cout << "\n\tDe Pulgadas a Metros";
    cout << "\n\t________________________\n";

    cout << "\n\tIngrese Pulgadas: ";
    cin >>pulgadas;

    cout << "\n\t\t---------------------------" << endl;
    resultado = pulgadas*0.0254;
    cout << "\n\t\tResultado: " << resultado <<" Metros."<<endl;

    system("pause>nul");
}
void lAk()
{
    system("cls");
    
    float libras=0;
	float kilos=0;
    float resultado;

	cout << "\n\tDe Libras a Kilos";
    cout << "\n\t________________________\n";

    cout << "\n\tIngrese Libras: ";
    cin >>libras;

    cout << "\n\t\t---------------------------" << endl;
    resultado = libras*0.453592;
    cout << "\n\t\tResultado: " << resultado <<" Kilos."<<endl;

    system("pause>nul");
}

void kAl()
{
    system("cls");
    
    float libras=0;
	float kilos=0;
    float resultado;

	cout << "\n\tDe Kilos a Libras";
    cout << "\n\t________________________\n";

    cout << "\n\tIngrese Kilos: ";
    cin >>kilos;

    cout << "\n\t\t---------------------------" << endl;
    resultado = kilos*2.20462;
    cout << "\n\t\tResultado: " << resultado <<" Libras."<<endl;

    system("pause>nul");
}




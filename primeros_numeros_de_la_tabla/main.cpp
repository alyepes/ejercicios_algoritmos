#include <iostream>//biblioteca de entada y salida
#include <math.h>//biblioteca matematica
#include <stdlib.h>//biblioteca sistema

using namespace std;// palabras reservadas

int main()
{

    int k=0,total=0, fin=0;
    while( true)
    {

        cout<< "______________________________________"<<endl;
        cout<< "|  ingrese el numero de la tabla:    |"<<endl;
        cout<< "|____________________________________|"<<endl;
        cin>>   k;
        for (int i=0; i<=10; i++)
        {

            total=i*k;
            cout << k << "x" << i << "=" << total<<"    |        "<< "  al cuadrado es:" <<  pow ( total, 2)<<endl;

        }


        cout<< " desea cerrar el programa? "<< endl;
        cout<<"ingrese 1 para cerrar 0 para continuar: ";
        cin>>fin;
        if ( fin==1)
        {
            break;
        }
    }
return 0;
}

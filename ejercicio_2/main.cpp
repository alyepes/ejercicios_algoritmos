#include <iostream> // biblioteca I/O
#include <math.h> // biblioteca matemática



using namespace std; // palabras reservadas

int main() //dedlaración de variables

{
    int suma=0, cantidad=0, fin=0;
    while (true)
    {
        for (int  i=1; i<=10; i++)
        {
            cout<<"ingrese la cantidad que quiere sumar: " <<endl;//ingrese cantidades
            cin>>cantidad;

            suma=(suma+cantidad);
            cout<<"____________________________________________"<<endl;
            cout<<"la suma de las cantidades es: "<<suma<<endl;

        }

        cout << "ingrese 'c' para cerrar o ingrese 's' para seguir: "<<endl;  // rompe el ciclo while si el usuario pide cerrar el programa
        cin >> fin;
        if(fin ==0)
        {
            break;
        }
    }

    return 0;
}


#include <iostream>//biblioteca I/O
#include <math.h> //biblioteca mateatica

using namespace std;

int main()//ingreso de datos edad y alumnos
{
    int promedio=0,edad=0, alumnos=0,suma=0, fin=1;
    cout<<"ingrese alumnos: " <<endl;
    cin>>alumnos;
    while(true)
    {
        for (int i=1;  i<=alumnos; i++)
        {
        cout<<" ingrese la edad: " <<endl;
        cin>>edad;
        if(edad <=18)
        {
            suma=(suma+edad);
            promedio=(suma/i);
            cout<<"la edad promedio es: "<<promedio<<endl;
        }
        else
        {
            cout<<"la edad es mayor  es 18"<<endl;
            promedio = (suma/i-1);
            cout<<" el promedio de edad es de: "<<promedio<<endl;

        }

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

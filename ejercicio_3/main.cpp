#include <iostream>//biblioteca de entrada y salida
#include <math.h>
using namespace std;

int main()
{
    float estatura=0.00,promedio=0, suma_estaturas=0;
    int contador=0, cerrar=0;
    while(true)
    {


            cout<<"ingrese la estatura: ";//ingrese datos
            cin>>estatura;
            suma_estaturas=estatura+suma_estaturas;
            contador ++;
            promedio=suma_estaturas/contador; //promedio
            cout<<"el promedio de lasestaturas es: "<<promedio<<endl<<endl;
            cout<<"_________________________________________"<<endl<<endl;
            cout<<"¿Desea Cerrar el programa?"<<endl;
            cout<<"c = Si"<<endl;
            cout<<"s = No"<<endl;
            cin>>cerrar;
            if (cerrar==1)
            {

             break;
            }
    }

    return 0;
}

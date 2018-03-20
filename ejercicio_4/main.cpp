#include <iostream>//libreriaI/O
#include <math.h>//libreria matematica
using namespace std;

int main()
    {    //declaracion de variables
        int numero=0, menores=0, cero=0, mayores=0, cerrar=0;
        while(true)
        {

            cout<<" ingrese un numero: ";
            cin>>numero;

            if (numero ==0)
            {
                cero++;
            }
            else if (numero<0)  //contadorpara los iguales, mayores, menos a cero.
            {
                menores++;
            }
            else
            {
                mayores++;
            }

        cout << "ingrese 'c' para cerrar o ingrese 's' para seguir: "<<endl;  // rompe el ciclo while si el usuario pide cerrar el programa
        cin >> cerrar;
        if(fcerrar==0)
        {
            break;
        }
    }

    return 0;
}

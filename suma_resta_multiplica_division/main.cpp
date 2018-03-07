#include <iostream> // biblioteca entradas y salidas
#include <math.h> // biblioteca matemática
using namespace std; // parlabras reservadas
// función pricipal
int main()
{
    // declaración de variables
    int suma=0, contador =0, fin=1, num1=0, num2=0;
    char calculo = '0';
    // incicio ciclo
    while(fin==1){
        cout << "Ingrese s para sumar o m para multiplciar" << endl;
        cout<<"ingrese r para restar  o d para dividir"<<endl;
        cout << "O ingrese otra letra para mostrar la sumatoria: ";
        cin >> calculo;
        switch(calculo){
        case 's':
            cout << "Ingrese el numero 1: ";
            cin >> num1;
            cout << "Ingrese el numero 2: ";
            cin >> num2;
            cout << "Suma: " << num1+num2 << endl;
            break;
        case 'r':
            cout<< "ingrese el numero 1:" ;
            cin>>num1;
            cout<<"ingrese numero 2:";
            cin>>num2;
            cout<< "rest: "<<num1-num2<< endl;
            break;
        case 'm':
            cout << "Ingrese el numero 1: ";
            cin >> num1;
            cout << "Ingrese el numero 2: ";
            cin >> num2;
            cout << "Multiplicacion: " << num1*num2 << endl;
            break;
        case 'd':
            cout<<"ingrese numero 1:";
            cin>>num1;
            cout<<"escriba numero 2:";
            cin>>num2;
            cout<< "dividion: " <<num1/num2<< endl;
            break;
        default:
            while(contador < 15){
            // proceso
            suma = suma + contador;
            //cout << "Suma actual: " << suma << endl;
            contador = contador + 1;
            //cout << "Contador Actual: " << contador << endl;
            }
            suma = pow(suma,3);
            contador = 0; // reset contador
            cout << "Suma total: " << suma << endl;
            suma = 0;
            break;
        }
        //pregutna al usuario si desea cerrar elprograma
        cout << "Desea cerrar el programa?. ingrese cero '0' para cerrarlo: " <<endl;
        cout << "De lo contrario ingrese 1: ";
        cin >> fin;
    }

    return 0;
}

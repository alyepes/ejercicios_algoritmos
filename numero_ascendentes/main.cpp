#include <iostream>

using namespace std;
int numero1=0, numero2=0;
int main()
 {
    cout<<"ingrese numero1:";
    cin>> numero1;
    cout<<"ingrese numero2:";
    cin>>numero2;

    if (numero1<numero2)
        {
         cout << "el resultado es: "<<numero1<<", "<<numero2;
        }
    else
    {

        cout<<"el resultado es: "<<numero2<<", "<<numero1;
    }


 return 0;
}

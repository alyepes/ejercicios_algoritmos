
#include <iostream>//biblioteca de entrada y salida

#include <math.h>//biblioteca matematica



using namespace std;//palabras reservadas

//funcion principal

int main()

 {

    int suma=0,contador=0, fin=1;

     //inicio de ciclo

     while (fin==1){

        while(contador<15)

       { //proceso

        suma= suma+contador;

        cout<<"suma actual:"<<suma<<endl;

        contador=contador+1;

        cout<<"contador actual:"<<contador<<endl;



        }

    suma= pow(suma,3);

    contador =0;

    suma=0;



    cout<<"suma total:"<<suma<<endl;

    //pregunta al usuario si desea cerrar el programa

    cout<<"suma total:"<<suma;

    cout<<"deseacerrar el programa?. ingrese _'0'_ para cerrar el programa";

    cout<<"de lo contrario ingrese 1:";

    cin>>fin;

    }



    return 0;

  }

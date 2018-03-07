/* programacion y algoritmos
javier alejandro yepes henao 2018.*/

#include <iostream>//biblioteca deentra y salida

    using namespace std;//palabras reservadas
    int main()
 {
    int time=0;
    char categori=0;
    float value=0.0;
    float inc=0.0;
    //Declaraciòn de variables
    cout <<"imgrese sueldo: ";
    cin>> value;
    cout<<"ingrese tiempo en anios: ";
    cin>>time;
    //definicionde categoria y datos
    if  (time>20&&time<=30)
    {
     categori='a';
     }
    else if (time>15&&time<=20)
    {
        categori='B';
    }
    else if (time>10&&time<=15)
    {
      categori='C';
    }
    else
    {
        categori='D';

    }
    switch (categori)
    {
        case 'A':
         inc=value*0,15;
        break;
        case 'B':
        inc=value*0,12;
        break;
        case 'C':
        inc=value*0,10;
        break;
        case 'D':
        inc=15;
        break;
    }
   cout<<"categoria:"<<categori<<endl;
   cout<<"aumento:"<<inc;
   return 0;

 }

#include <iostream>

using namespace std;

//9. Una importante marca de computadoras permite elegir cierta configuraci�n del
//equipo a comprar. Para ello existe la siguiente escala de precios:
//              i5 (1)     i7 (2)   i9 (3)
//8 RAM (1)    USD 800   USD 900   USD 1200
//16 RAM (2)   USD 900   USD 1000  USD 1400
//32 RAM (3)   USD 1000  USD 1400  USD 2000
//Adem�s, el equipo viene con un disco que permite almacenar 500 GB de
//informaci�n y que se puede ampliar a 1 TB si as� lo desea, lo cual tiene un costo
//adicional de USD 300.
//Hacer un programa que solicite la opci�n de procesador, la opci�n de memoria
//RAM, y si extiende el disco o no (ingresa 1 para extender y 0 para no extender)
//y calcule y emita por pantalla el monto de la m�quina seleccionada.

int main()
{int p, om, d,precio;

cout<<"Ingrese el procesador 1(i5), 2(i7), 3(i9): "<<endl;
cin>>p;
cout<<"Ingrese la memoria RAM 1(8RAM), 2(16RAM), 3(32RAM): "<<endl;
cin>>om;
cout<<"Extiende disco? 1(Si), 0(No)"<<endl;
cin>>d;

switch(p){
      case 1:switch(om){
              case 1: precio=800;
                break;
              case 2: precio=900;
                break;
              default: precio=1000;
                break;}
            break;
      case 2:switch(om){
              case 1: precio=900;
                break;
              case 2: precio=1000;
                break;
              default: precio=1400;
                break;}
            break;
      default:switch(om){
             case 1: precio=1200;
                break;
             case 2: precio=1400;
                break;
             default: precio=2000;
                break;}
            break;}
    if(d==1){precio+=300;}

    cout<<endl<<"Su total es de: "<<precio<<endl;
    return 0;
}

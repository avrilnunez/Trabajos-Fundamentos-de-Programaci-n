//25041712
//Dulce Avril Nuñez Mier
#include<iostream>
#include<math.h>
#include<windows.h>
using namespace std;
int main(){
	SetConsoleOutputCP(CP_UTF8); 
    SetConsoleCP(CP_UTF8);
    float rendimiento,distancia,consumo;
    cout<<"Dame la distancia que se recorrio: ";
    cin>>distancia;
    cout<<"Dame lo que se consumio de la gasolina: ";
    cin>>consumo;
    rendimiento=distancia/consumo;
    cout<<"El rendimiento de combustible es: "<<rendimiento<<"Km por litro";
    return 0;       
}

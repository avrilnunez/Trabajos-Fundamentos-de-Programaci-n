//25041712
//Dulce Avril Nuñez Mier
#include<iostream>
#include<math.h>
#include<windows.h>
using namespace std;
int main(){
	SetConsoleOutputCP(CP_UTF8); 
    SetConsoleCP(CP_UTF8); 
    float precioN,precioD,pcdt,descuento;
    cout<<"Dame el precio normal: ";
    cin>>precioN;
    cout<<"Dame el porcentaje de descuento: ";
    cin>>pcdt;
    descuento=precioN*pcdt/100;
    precioD=precioN-descuento;
    cout<<"El precio con descuento es: "<<precioD;
    return 0;       
}

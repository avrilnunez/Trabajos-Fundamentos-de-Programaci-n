//25041712
//Dulce Avril Nuñez Mier
#include<iostream>
#include<math.h>
#include<windows.h>
using namespace std;
int main(){
	SetConsoleOutputCP(CP_UTF8); 
    SetConsoleCP(CP_UTF8); 
    float minutos,horas,residuo,min2;
    cout<<"Dame la cantidad de minutos a convertir";
    cin>>minutos;
    horas=trunc(minutos/60);
    //residuo=(minutos/60)-trunc(minutos/60);
    residuo=(minutos/60)-horas;
    cout<<minutos<<" minutos equivale a "<<horas<<":"<<min2<<" horas\n:";
    printf("%02.0f minutos equivalen a %02.0f:%02.0f horas",minutos,horas);
	return 0;
}

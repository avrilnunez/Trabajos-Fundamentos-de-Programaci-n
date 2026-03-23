#include<iostream>
#include<math.h>
#include<windows.h>

using namespace std;

int main(){

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    //scanf

//Sirve para leer datos que el usuario escribe en el teclado.

//Básicamente: recibe información.

//%d → número entero
//%f → decimal
//%c → carácter
//%s → texto

    float minutos, horas, residuo, min2;

    cout<<"Dame la cantidad de minutos a convertir: ";
    cin>>minutos;

    horas=trunc(minutos/60);

    residuo=(minutos/60)-horas;

    min2=residuo*60;

    cout<<minutos<<" minutos equivale a 0"<<horas<<":0"<<min2<<" horas\n";

    printf("%02.0f minutos equivalen a %'.0f:%02.0f horas",minutos,horas,min2);

    return 0;
}